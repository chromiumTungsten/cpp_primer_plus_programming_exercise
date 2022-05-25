#include "golf.h"
#include <iostream>
#include <cstring>

using namespace std;



void Golf::setGolf(){
	cout << "please input full_name: "<<endl;
	char new_str[Len];
	int _handicap;
	cin.getline(new_str,40);
	cout<<"please input handicap: " <<endl;
	cin >> _handicap;
	Golf go_tempertory(_handicap,new_str);
	*this = go_tempertory;	
}


void Golf::show(){
	cout << "full_name: " << full_name << endl;
	cout << "handicap： " << handicap <<endl;
}
	

Golf::Golf(int _handicap,const char * _full_name)
{
	strcpy(full_name,_full_name);
	handicap = _handicap;
}
