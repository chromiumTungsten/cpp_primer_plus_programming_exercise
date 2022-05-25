#include "person.h"
#include <cstring>
#include <iostream>

using namespace std;

Person::Person(const string & ln, const char fn[]){
	lname = ln;
	strcpy(fname, fn);
}

void Person::show() const{
	cout << "fname: " << fname <<endl
		 << "last name: " << lname << endl;
}

void Person::Formalshow() const{
 	cout<< fname << "," << lname << endl;
}	

