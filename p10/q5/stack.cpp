#include "stack.h"
#include <iostream>

void Stack::push(customer* _new){
	if(count == 0){
		dot_now = new dot(_new);
		++count;
	}else{
		dot * dot_new = new dot(_new,dot_now);
		dot_now = dot_new;
		++count;
	}
}

bool Stack::isempty(){
	return count == 0;
}

customer * Stack::pop(){
	dot * dot_new = dot_now->getNext();
	customer * customer_new = dot_now->getNow();
	total_pay += customer_new->payment;
	delete dot_now;
	dot_now = dot_new;
	--count;
	return customer_new;
}

int Stack::size(){
	return count;
}

void Stack::getName(){
	using namespace std;
	cout<<"full_name: "<<dot_now->getNow()->full_name;
	cout << endl << total_pay<<endl;	
}

	


			
		 

