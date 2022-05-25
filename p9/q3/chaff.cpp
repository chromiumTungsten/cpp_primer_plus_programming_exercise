#include <iostream>
#include <cstring>
#include "chaff.h"

void showChaff(const chaff & _cha){
	using namespace std;
	cout<<"dross:"<<endl
		<<_cha.dross<<endl
		<<_cha.slag<<endl;
}

void setChaff(chaff & _cha, char * _str, int _slag){
	strcpy(_cha.dross, _str);
	_cha.slag = _slag;
}

