/*
 * @Date: 2021-12-02 22:12:23
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-02 22:52:35
 * @Description: //! 对于 cin>>整数的并返回false的cin对象来说,必须使用clear()方法将其缓存清除,否则无法输出.
 */
#include <iostream>
#include <ciso646>
using namespace std;
int main()
{
    int a[2];
    int sum = 0;
    cout << "please enter the frist  number:";
    while (!(cin >> a[0]))
    {
        cout << endl
             << "please enter the right number: ";
        cin.clear();
        while(cin.get() != '\n') continue;
    }
    cout << endl
         << "please enter the second number:";
    while (!(cin >> a[1]))
    {
        cout << endl
             << "please enter the right number: ";
        cin.clear();
        while(cin.get() != '\n') continue;
    }
    for (int i = (a[0] < a[1]) ? a[0] : a[1]; i <= ((a[0] < a[1]) ? a[1] : a[0]); ++i)
        sum += i;
    cout << endl
         << "the sum is " << sum;
}