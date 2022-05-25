#include "stock.h"

int main(){
	Stock s1 = Stock();
	Stock s2("string", -1, 20);
	Stock top = s1.topval(s2);
	top.show();
}

