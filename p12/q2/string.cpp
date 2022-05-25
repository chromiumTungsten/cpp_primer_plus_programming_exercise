/* -*- coding: utf-8 -*-
** @File Name    :  string.cpp
** @Author       :  chromium.tungsten
** @Created Time :  Sun May  1 21:11:31 2022
*/
#include "string.h"
#include <cstring>
#include <cctype>
using std::cin;
using std::cout;
int String::num_strings = 0;
int String::HowMany()
{
	return num_strings;
}

String::String(const char *s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
}

String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

String::String(const String &st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
}

String::~String()
{
	--num_strings;
	delete[] str;
}

String &String::operator=(const String &st)
{
	if (this == &st)
	{
		return *this;
	}
	delete[] str;
	len = st.len;
	str = new char[len+1];
	std::strcpy(str, st.str);
	return *this;
}

String &String::operator=(const char *s)
{
	delete[] str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}

char &String::operator[](int i)
{
	return str[i];
}

bool operator<(const String &st, const String &st2)
{
	return (std::strcmp(st.str, st2.str) < 0);
}

bool operator>(const String &st, const String &st2)
{
	{
		return st2 < st;
	}
}

bool operator==(const String &st, const String &st2)
{
	return (std::strcmp(st.str, st2.str) == 0);
}

istream &operator>>(istream &is, String &st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
	{
		st = temp;
	}
	while (is && is.get() != '\n')
	{
		continue;
	}
	return is;
}

void String::stringup()
{
	for (int i = 0; i < len; i++)
	{
		str[i] = std::toupper(str[i]);
	}
}

void String::stringlow()
{
	for (int i = 0; i < len; i++)
	{
		str[i] = std::tolower(str[i]);
	}
}

bool String::has(const char cr)
{
	for (int i = 0; i < len; i++)
	{
		if (str[len] == cr)
		{
			return true;
		}
	}
	return false;
}

ostream &operator<<(ostream &os, const String &st)
{
	os << st.str;
	return os;
}

String operator+(String st1, String st2)
{
	char *new_char = new char[st1.len + st2.len + 1];
	new_char[0] = '\0';
	std::strcpy(new_char, st1.str);
	std::strcat(new_char, st2.str);
	String str_new = new_char;
	std::cout << str_new;
	delete[] new_char;
	return str_new;
}