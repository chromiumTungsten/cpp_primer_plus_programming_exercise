#include "stack.h"

int main(){
	customer * c1 = new customer("gdsg",10);
	customer * c2 = new customer("gd",10);	
	customer * c3 = new customer("g",10);
	Stack s;
	s.isempty();
	s.push(c1);
	s.getName();
	s.push(c2);
	s.push(c3);
	s.getName();
	delete s.pop();
	s.getName();
}
