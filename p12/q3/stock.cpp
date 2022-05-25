#include "stock.h"

#include <cstring>
#include <iostream>
namespace {
using std::cout;
using std::strcpy;
using std::strlen;
}  // namespace

Stock& Stock::operator=(Stock& s) {
  delete[] company;
  company = new char[strlen(s.company) + 1];
  strcpy(company, s.company);
  share_val = s.share_val;
  shares = s.shares;
  set_tol();
  return *this;
}

Stock::Stock() {
  company = new char[1];
  shares = 0;
  share_val = 0;
  set_tol();
}

Stock::Stock(const Stock& s) {
  company = new char[strlen(s.company) + 1];
  strcpy(company, s.company);
  share_val = s.share_val;
  shares = s.shares;
  set_tol();
}

Stock::Stock(const char* co, long n, double pr) {
  company = new char[strlen(co) + 1];
  strcpy(company, co);
  share_val = pr;
  shares = n;
  set_tol();
}
Stock::~Stock() { delete[] company; }

void Stock::buy(long num, double price) {
  if (num < 0) {
    cout << "Number of shares purchased can't be negative. "
         << "Transaction is aborted. \n";
  } else {
    shares += num;
    share_val = price;
    set_tol();
  }
}

void Stock::sell(long num, double price) {
  if (num < 0) {
    cout << "Number of shares purchased can't be negative. "
         << "Transaction is aborted. \n";
  } else if (num > shares) {
    cout << "You can't sell more than you have! "
         << "Transaction is aborted. \n";
  } else {
    shares -= num;
    share_val = price;
    set_tol();
  }
}

void Stock::update(double price) {
  share_val = price;
  set_tol();
}

std::ostream& operator<<(std::ostream& os, const Stock& s) {
  using std::ios_base;
  ios_base::fmtflags orig = os.setf(ios_base::fixed, ios_base::floatfield);
  std::streamsize prec = os.precision(3);
  os << "Commany: " << s.company << " Shares: " << s.shares << "\n";
  os << "  Share price: $" << s.share_val;
  os.precision(2);
  os << "Total Worth: $" << s.total_val << "\n";
  os.setf(orig, ios_base::floatfield);
  os.precision(prec);
  return os;
}


const Stock& Stock::topval(const Stock& s) const {
  if (s.total_val > total_val) {
    return s;
  } else {
    return *this;
  }
}
 


