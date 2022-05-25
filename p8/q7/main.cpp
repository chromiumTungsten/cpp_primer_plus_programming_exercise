#include <iostream>
using namespace std;

template<typename T>
T SumArray(T * _arr, int _num);
template<typename T>
T SumArray(T* _arr[],int _num);

struct debts
{
	char name[50];
	double amount;
};

int main(){
	int things[] = {13, 31, 103, 301, 310, 130};
	struct debts mr_E[] = {
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1200.0},
		{"Iby Stout", 1800.0}
		};
	double* pd[3];
	for(int i = 0;i<3;++i){
		pd[i] = &mr_E[i].amount;
	}
	cout << SumArray(things, 6)<<endl;
	cout << SumArray(pd, 3)<<endl;
}

template<typename T>
	T SumArray(T * _arr, int _num){
		T sum = 0;
		for(int i = 0; i < _num; ++i){
			sum += _arr[i];
		}
		return sum;
	}

template<typename T>
	T SumArray(T* _arr[],int _num){
		T sum;
		for(int i = 0; i < _num; ++i){
			sum += *_arr[i];
		}
		return sum;
	}

			
	
