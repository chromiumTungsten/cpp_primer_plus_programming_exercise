/*
 * @Date: 2021-12-30 16:12:33
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-30 16:46:26
 * @Description: None
 */
#include <iostream>

void print(char *);
void print(char *, unsigned int);

int main()
{
    char str[] ="print";
    print(str);
    print(str, 3);
}

void print(char *_str)
{
    using namespace std;
    cout << _str << endl;
}

void print(char *_str, unsigned int _i)
{
    using namespace std;
    if (_i == 0)
    {
        return;
    }
    cout << _str << endl;
    print(_str, --_i);
}
