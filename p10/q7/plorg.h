#ifndef PLORG_H_
#define PLORG_H_
class Plorg{
	private:
		static const int MAX_LEN = 19;
		char name[MAX_LEN];
		int CI;
	public:
		Plorg(const char * _name = "Plotg");
		void setCI(int _ci);
		void show() const;
};
#endif
