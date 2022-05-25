#include <iostream>
#include "stock.h"

Stock::Stock(){
	company = "noname";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
	company = co;
	if(n<0){
		std::cout << "Number of shares can't be negative; "
				  << company << " shares set to 0.\n";
		shares = 0;
	}else{
		shares = n;
	}
	share_val = pr;
	total_val = 1;
}

const Stock & Stock::topval(const Stock & s) const{
	 if(s.total_val > total_val)
	 {
		 return s;
	 }else{
		 return *this;
	 }
 }

void Stock::show() const
{
	std::cout<< company << std::endl;
}

