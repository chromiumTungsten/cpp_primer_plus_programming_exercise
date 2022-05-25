#include <iostream>
#include "sales.h"

int main(){
	using namespace SALES;
	double sale_f[]  = {1,2,3,4};
	Sales s1,s2;
	setSales(s1, sale_f, QUARTERS);
	setSales(s2);
	showSales(s1);
	showSales(s2);
}
