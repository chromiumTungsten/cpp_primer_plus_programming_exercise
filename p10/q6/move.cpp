#include "move.h"
#include <iostream>

Move::Move(double a, double b){
	x = a;
	y = b;
}

void Move::showMove() const{
	using namespace std;
	cout<<"x: "<<x << endl
		<<"y: "<<y <<endl;
}

Move Move::add(const Move &m) const
{
	double new_x = x + m.x;
	double new_y = y + m.y;
	return Move(new_x, new_y);
}


void Move::reset(double a, double b){
	x = a;
	y = b;
}
