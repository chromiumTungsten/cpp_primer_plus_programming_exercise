#ifndef CHAFF_H_
#define CHAFF_H_
struct chaff
{
	char dross[20];
	int slag;
};

void setChaff(chaff & _cha, char * _str, int _slag);

void showChaff(const chaff & _cha);

#endif
