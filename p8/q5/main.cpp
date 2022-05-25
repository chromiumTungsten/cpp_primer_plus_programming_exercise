/*
 * @Date: 2022-04-05 18:24:58
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2022-04-11 15:40:23
 * @Description: None
 */
#include <iostream>

using namespace std;
template <typename T> void max5(T *);

int main(){	
	int test_group_1[5] = {1, 2, 3, 4, 5};
	double test_group_2[5]  = {1.0,2.0, 3.0, 4.0, 5.0};
	max5(test_group_1);
	max5(test_group_2);
}

template <typename T>
void max5(T * _input_group){
	T max_number= _input_group[0];
	for(int i = 1; i <5; ++i){
	      max_number = (max_number>_input_group[i]) ? max_number:_input_group[i];	
	}
	cout<<max_number<<endl;
}
	
