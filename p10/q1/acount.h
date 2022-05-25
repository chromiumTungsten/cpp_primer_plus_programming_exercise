#ifndef ACOUNT_H_
#define ACOUNT_H_
#include <string>

class Acount{
	private:
		std::string name;
		std::string acount_name;
		double money;
	public:
		Acount(std::string _name,std::string _acount_name, double _money);
		enum item{Name,Acount_name,Money};
		void showAcount() const;
		void setMoney(double new_nu);
		void setItem(std::string _new_name,item itm);
};

#endif

		
	
