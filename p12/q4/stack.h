#ifndef STACK_H_
#define STACK_H_
#include <ostream>
typedef unsigned long Item;

class Stack {
 private:
  enum { MAX = 10 };
  Item* pitems;
  int size;
  int top;

 public:
  Stack(int n = MAX);
  Stack(const Stack& st);
  ~Stack();
  bool isempty();
  bool isfull();
  bool push(const Item& item);
  bool pop(Item& item);
  Stack& operator=(const Stack& st);
};

// std::ostream& operator<<(std::ostream& os, bool _bl);

#endif
