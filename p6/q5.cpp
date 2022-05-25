/*
 * @Date: 2021-12-02 15:40:10
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-02 16:05:40
 * @Description: None
 */
#include <iostream>
#include <ciso646>
using namespace std;

int main()
{
    cout << "please input your income: ";
    double income, tax;
    while (cin >> income and income >= 0)
    {
        cout << endl
             << "The tax is ";
        if (income > 3500)
        {
            cout << (income - 35000) * 0.2 + 20000 * 0.15 + 10000 * 0.1;
        }
        else if (income > 15000 and income <= 35000)
        {
            cout << (income - 15000) * 0.15 + 10000 * 0.1;
        }
        else if (income > 5000 and income <= 15000)
        {
            cout << (income - 5000) * 0.1;
        }
        else
        {
            cout << 0;
        }
        cout << "tvarps" << endl;
        cout << "next: ";
    }
}