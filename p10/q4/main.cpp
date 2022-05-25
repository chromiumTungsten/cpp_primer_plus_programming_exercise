#include "sales.h"

int main(){
	using namespace SALES;
	double arr[4] = {1,2,3,4};
	Sales s1(arr,4);
	Sales s2;
	s2.setSale();
	s1.show();
	s2.show();	
	return 0;

}
