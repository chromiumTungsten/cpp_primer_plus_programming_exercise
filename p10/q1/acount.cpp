#include "acount.h"
#include <iostream>

Acount::Acount(std::string _name,std::string _acount_name, double _money)
{
	name = _name;
	acount_name = _acount_name;
	money = _money;
}

void Acount::showAcount() const{
	std::cout << "name: "<< name << std::endl
			  << "money: " << money << std::endl
			  << "acount_name: " << acount_name;
}

void Acount::setMoney(double new_nu){
	money = new_nu;
}

void Acount::setItem(std::string _new_name, item _itm){
	switch(_itm){
		case Name: name = _new_name;break;
		case Acount_name: acount_name= _new_name;break;
		default :
				   std::cout << std::endl << "input choose erro" <<std::endl;
				 }
}
