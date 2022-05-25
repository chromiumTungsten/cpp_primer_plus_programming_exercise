#ifndef STOCK_H_
#define STOCK_H_
#include <ostream>

class Stock {
 private:
  char* company;
  int shares;
  double share_val;
  double total_val;
  void set_tol() { total_val = shares * share_val; }

 public:
  Stock();
  Stock(const Stock& s);
  Stock(const char* co, long n = 0, double pr = 0.0);
  ~Stock();
  void buy(long num, double price);
  void sell(long num, double price);
  void update(double price);
  Stock& operator=(Stock& s);
  const Stock& topval(const Stock& s) const;
  friend std::ostream& operator<<(std::ostream& os, const Stock& s);
};

#endif
