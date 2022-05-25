#include <iostream> 
#include <cstring>
using namespace std;
struct stringy{
	char * str;
	int ct;
};

void set(stringy &,char *);
void show(const stringy &, int num = 1);
void show(const char *, int num = 1);

int main(){
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return 0;
}

void set(stringy & beany, char * input_str){
	beany.ct = strlen(input_str);
	beany.str = new char[beany.ct];
	strcpy(beany.str, input_str);
}

void show(const stringy & beany, int num){
	while(num){
		cout<<beany.str<<endl;
		num--;
}
}

void show(const char * input_str, int num){
	while(num){
		cout<<input_str<<endl;
		num--;
	}
}
