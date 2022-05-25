#include "cow.h"

int main(){
    Cow c1;
    Cow c2("qish"," diaoyu", 100);
    Cow *c3 = new Cow(c2);
    c1 = c2;
    Cow c4;
    c1.ShowCow();
    c2.ShowCow();
    c3->ShowCow();
    c4.ShowCow();
	Cow c6;
}
