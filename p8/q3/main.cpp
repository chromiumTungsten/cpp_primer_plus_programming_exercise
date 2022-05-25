#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;
void getCharFromString(string &, char** );

int main(){
	while(1){
		cout<<"Enter a string(q to quit):";
		string new_input_str;
		getline(cin, new_input_str);
		char* upper_str;
		//char * upper_str;
		getCharFromString(new_input_str,&upper_str);
		if(upper_str){
			cout<<upper_str<<endl;
		}else{
			cout<<"Bye!"<<endl;
			break;
		}
	}
	system("cat /etc/hosts");
	return 0;
}

void getCharFromString(string & getted_str, char** out_str){
	if(getted_str=="q"){
		*out_str = 0;	
	}else{
		const char* middle_str = getted_str.c_str();
		const int supple_len = strlen(middle_str);
		//out_str = new char[20];
		//cout<<supple_len<<endl;
		*out_str=(char*)malloc(supple_len);
		for(int i=0; i < supple_len; i++){
			(*out_str)[i] = toupper(middle_str[i]);
		}
		(*out_str)[supple_len] = '\0';
	}
}
		
