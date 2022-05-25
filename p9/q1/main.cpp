#include <iostream>
#include "golf.h"

int main(){
	using namespace std;
	golf ann;
	setgolf(ann, "Ann Birdfree", 24);
	golf andy;
	while(!setgolf(andy)){
		cout<<"please input right name"<<endl;
	}
	handicap(andy,10);
	showgolf(ann);
	showgolf(andy);
}
