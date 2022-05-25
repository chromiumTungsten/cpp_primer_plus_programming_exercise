#ifndef STACK_H_
#define STACK_H_
#include <cstring>

struct customer{
	char full_name[35];
	double payment;
	customer(const char * ar, double _pay){
		strcpy(full_name,ar);
		payment = _pay;
	}
};

class Stack{
	private:
		class dot{
			private:
				customer * now;
				dot * next;
			public:
				dot(customer * head){ now = head; }
				dot(customer *_now,dot * _next){ now = _now; next = _next;}
				dot * getNext(){return next;}
				customer * getNow(){return now;}
		};
	private:
		int count;
		dot* dot_now;
		double total_pay;
	public: 
		Stack(){ count =0; total_pay = 0;}
		customer * pop();
		void push(customer * _new);
		bool isempty();
		int size();
		void getName();
};
		

#endif	
