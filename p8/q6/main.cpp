#include <iostream>
#include <cstring>

using namespace std;

template<typename T> 
	T maxn(T* _arry, int _count);
template<char**>
	char * maxn(char ** _arry, int _count);

int main(){
	int int_test[] = {1,2,3,4,5};
	double double_test[] = {1,2,3,4};
	char char_1[] = "char_1";
	char char_2[] = "char_2";
	char char_3[] = "char";
	char char_4[] = "cha";
	char char_5[] = "ch";
	char * arry[] = {char_1,char_2,char_3,char_4,char_5};
	cout<<maxn(double_test,4)<<endl;
	cout<<maxn(int_test,5)<<endl;
	cout<<maxn(arry,5)<<endl;
}

template<typename T>
	T maxn(T* _arry, int _count){
		T assum_max = _arry[0];
		for(int i =1;i < _count-1;++i){
			if(assum_max<_arry[i]){
					assum_max = _arry[i];
					}
				}
		return assum_max;
		}
template<char**>
	char * maxn(char ** _arry, int _count){
		int length = 0;
		char * assum_max;
		for(int i = 0; i < _count; ++i){
			 	if(length< strlen(_arry[i])){
					assum_max = _arry[i];
					}
				}
		return assum_max;
}	
													

