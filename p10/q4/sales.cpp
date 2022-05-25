#include "sales.h"
#include <iostream>

namespace SALES
{
	Sales::Sales(const double ar[], int n){
		for(int i = 0; i < n; ++i){
			sales[i] = ar[i];
		}
		setMMA();
	}

	void Sales::setMMA(){
		double assum_max = sales[0];
		double assum_min = sales[0];
		double sum = sales[0];
		for(int i = 1; i <QUARTERS;++i){
			sum += sales[i];
			assum_max = assum_max < sales[i] ? sales[i] :assum_max;
		assum_min = assum_min > sales[i]? sales[i] : assum_min;
		}
		min = assum_min;
		max = assum_max;
		average = sum/QUARTERS;
	}
	
	void Sales::setSale(){
		using namespace std;
		cout << "please input four number: "<< endl;
		for(int i =0; i < QUARTERS; i){
			while( i < QUARTERS && cin>>sales[i]){
				cout << "please input next:"<< endl;
					++i;
			}
			if(i < QUARTERS){
				cout<<"please input a double" <<endl;	
				cin.clear();
				while(cin.get() != '\n')
				{
					continue;
				}
			}	
		}
		setMMA();
	}

	void Sales::show(){
		 using namespace std;
		 cout << "average: "<< average <<endl
			  << "min: " << min <<endl
	 		<<"max: " << max << endl;
	}
}	
