/*
 * @Date: 2021-11-30 12:42:18
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-11-30 12:52:18
 * @Description: None
 */
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<double, 3> scode;
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << endl
             << "Enter the scord: ";
        cin >> scode[i];
    }
    cout<<"The avarge is "<<(scode[0]+scode[1]+scode[2])/3;
}