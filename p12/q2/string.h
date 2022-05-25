#ifndef STRING_H_
#define STRING_H_
#include <iostream>
#include <istream>
using std::istream;
using std::ostream;

class String
{
private:
	char *str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;

public:
	String();
	~String();
	String(const String &);
	String(const char *s);
	int length() const;
	String &operator=(const String &);
	String &operator=(const char *);
	char &operator[](int i);
	const char &operator[](int i) const;
	friend bool operator<(const String &st, const String &st2);
	friend bool operator>(const String &st, const String &st2);
	friend bool operator==(const String &st, const String &st2);
	friend ostream &operator<<(ostream &os, const String &st);
	friend istream &operator>>(istream &is, String &st);
	static int HowMany();
	void stringup();
	void stringlow();
	bool has(const char);
	friend String operator+(String st1, String st2);
};

#endif
