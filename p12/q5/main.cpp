#include "queue.h"
#include <cstdlib>
#include <ctime>
#include <iostream>


bool newcustomer(double x);
long testEach(double min_per_cust, Queue &line);

const int MIN_PER_HR = 60;
int main() {
  using std::cin;
  using std::cout;
  using std::endl;
  using std::ios_base;
  std::srand(std::time(0));
  int qs = 10;
  Queue line(qs);
  double perhour = 5;
  double min_per_cust = MIN_PER_HR / perhour;
  long aver = testEach( min_per_cust, line);
  while( aver  < 1){
    perhour++;
    min_per_cust = MIN_PER_HR / perhour;
    Queue line(qs);
    aver = testEach( min_per_cust, line);
  }
  cout<< "perhour: " << perhour; 
  return 0;
}

bool newcustomer(double x){
  return (std::rand()* x/RAND_MAX < 1);
}

long testEach(double min_per_cust, Queue &line){
  Item temp;
  long turnaways = 0;
  long customers = 0;
  long served = 0;
  long sum_line = 0;
  int wait_time = 0;
  long line_wait = 0;
  int cyclclimit = 100 * 60;

  for (int cycle = 0; cycle < cyclclimit; cycle++) {
    bool is_come = newcustomer(min_per_cust);
    if (is_come) {
      if (line.isfull()) {
        turnaways++;
      } else {
        customers++;
        temp.set(cycle);
        line.enqueue(temp);
      }
    }
    if(wait_time <= 0 && !line.isempty()){
      line.dequeue(temp);
      wait_time = temp.ptime();
      line_wait += cycle - temp.when();
      served++;
    }
    if(wait_time > 0){
      wait_time --;
      sum_line += line.queuecount();
    }
  }
  long aver = line_wait/served;
  return aver;
}
