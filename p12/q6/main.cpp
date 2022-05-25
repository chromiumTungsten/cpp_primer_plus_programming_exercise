#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"

bool newcustomer(double x);
long testEach(double min_per_cust, Queue& line, Queue& line2);

const int MIN_PER_HR = 60;
int main(int argc, char* argv[]) {
  using std::cin;
  using std::cout;
  using std::endl;
  using std::ios_base;
  std::srand(std::time(0));
  int qs = 10;
  Queue line(qs);
  Queue line2(qs);
  double perhour = 1;
  double min_per_cust = MIN_PER_HR / perhour;
  while (testEach(min_per_cust, line, line2) < 1) {
    perhour++;
    min_per_cust = MIN_PER_HR / perhour;
  }
  cout << "perhour: " << perhour;
  return 0;
}

bool newcustomer(double x) { return (std::rand() * x / RAND_MAX < 1); }

long testEach(double min_per_cust, Queue& line, Queue& line2) {
  Item temp;
  long turnaways = 0;
  long customers = 0;
  long served = 0;
  long sum_line = 0;
  int wait_time = 0;
  int wait_time2 = 0;
  double line_wait = 0;
  int cyclclimit = 100 * 60;

  for (int cycle = 0; cycle < cyclclimit; cycle++) {
    if (newcustomer(min_per_cust)) {
      if (line.isfull() && line2.isfull()) {
        turnaways++;
      } else {
        customers++;
        temp.set(cycle);
        if (line.queuecount() < line2.queuecount()) {
          line.enqueue(temp);
        } else {
          line2.enqueue(temp);
        }
      }
    }
    if (wait_time <= 0 && !line.isempty()) {
      line.dequeue(temp);
      wait_time = temp.ptime();
      line_wait += cycle - temp.when();
      served++;
    }
    if (wait_time2 <= 0 && !line2.isempty()) {
      line2.dequeue(temp);
      wait_time2 = temp.ptime();
      line_wait += cycle - temp.when();
      served++;
    }
    if (wait_time2 > 0) {
      wait_time2--;
      sum_line += line2.queuecount();
    }
    if (wait_time > 0) {
      wait_time--;
      sum_line += line.queuecount();
    }
  }
  return line_wait / served;
}
