#include <iostream>
#include "sales.h"
namespace SALES{

		void setSales(Sales & s, const double ar[], int n){
			for(int i =0; i < n; ++i){
				s.sales[i] = ar[i];
			}
			getAMM(s,n);
		}

		void getAMM(Sales &s, int n){
			double sum = 0;
			double assum_max = s.sales[0];
			double assum_min = s.sales[0];
			for(int i = 0; i < n; ++i){
				sum += s.sales[i];
			for(int i = 1; i < n; ++i){
				if(assum_max < s.sales[i]){
					assum_max = s.sales[i];
				}
				if(assum_min > s.sales[i]){
					assum_min = s.sales[i];
				}
			}
			s.average = sum/n;
			s.max = assum_max;
			s.min = assum_min;
			}
		}

		void setSales(Sales & s){
			using namespace std;
			cout << "please input four double numbers" << endl;
			int count = 0;
			while(count < QUARTERS){
				while(cin>>s.sales[count]){
					cout<<"please input next number"<<endl;
					++ count;
					if(count >= QUARTERS)
					{
					break;
					}
				}
				if(count < QUARTERS){
					cout << "please input a double" << endl;
					cin.clear();
					while(cin.get() != '\n'){
						continue;
					}
				}else{
					cout << "OK!" <<endl;
				}
			}
			getAMM(s,QUARTERS);
		}

		void showSales(const Sales & s){
			using namespace std;
			cout << "average: " << s.average<<endl
				<<"max: "<< s.max<<endl
				<<"min: " << s.min <<endl;
			}
}
