#ifndef GOLF_H_
#define GOLF_H_

#include <string>

class Golf{
	private:
		static const int Len = 40;
		char full_name[Len];
		int handicap;
	public:
		Golf(){ full_name[0] = '\0'; handicap = 0;}
		Golf(int,const char * _full_name = "hello_world");
		static void setHandicap(Golf &, int _handicap);
		void setGolf();
		void show();
};

#endif
				
