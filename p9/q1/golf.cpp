#include <iostream>
#include "golf.h"
#include <cstring>

void setgolf(golf & g, const char * name, int hc){
	strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf & g){
	using namespace std;
	cout<<"please enter name of golf"<<endl;
	cin.getline(g.fullname, 40);
	cout<<"please enter handicap"<<endl;
	cin>>g.handicap;
	if(strlen(g.fullname) == 0){
		return 0;
	}else{
		return 1;
	}
}

void handicap(golf & g, int hc){
	g.handicap = hc;
}

void showgolf(const golf & g){
	using namespace std;
	cout<<"name:\n"<<g.fullname<<endl<<"handicap:\n"<<g.handicap<<endl;
}


