#include <new>
#include "chaff.h"

const int buf_len = 100;
char buffer[buf_len];

int main(){
	chaff * cha = new (buffer) chaff[2];
	char str[] = "nihaohuai";
	setChaff(cha[0], str, 10);
	showChaff(cha[0]);
}
