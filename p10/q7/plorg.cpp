#include "plorg.h"
#include <cstring>
#include <iostream>

Plorg::Plorg(const char *_name){
	strcpy(name, _name);
	CI = 50;
}

void Plorg::setCI(int _ci){
	CI = _ci;
}

void Plorg::show() const{
	using namespace std;
	cout << "name: " << name << endl
		 << "CI: " << CI << endl;
}

