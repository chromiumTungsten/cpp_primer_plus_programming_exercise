#include <iostream>
#include <string>

using namespace std;

int main(){
	cout<<"please input iostream"<<endl;
	string input_str;
	getline(cin,input_str);
	if(input_str == "")
	cout << "it's kong"<<endl;
	else{
		cout<<input_str<<endl;
	}
}
