#include "move.h"

int main(){
	Move m1(1,2);
	Move m2(3,4);
	Move m3 = m1.add(m2);
	m1.reset(4,6);
	m1.showMove();
	m2.showMove();
	m3.showMove();
}
