#include "stock.h"
#include <iostream>
const int STK = 4;
int main(){
    std::cout<<"Stock holding:\n";
    Stock stocks[STK] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 120, 3.25),
        Stock("Fleep Enterprices", 60, 6.5)
    };
    int st;
    for ( st = 0; st < STK; st++)
    {
        std::cout << stocks[st];
    }
    const Stock * top = &stocks[0];
    for(st = 1; st<STK; st++){
        top = &top->topval(stocks[st]);
    }
    Stock s2= Stock()
    std::cout<<"\n Most valuable holding: \n";
    std::cout << *top;
    return 0;
}

