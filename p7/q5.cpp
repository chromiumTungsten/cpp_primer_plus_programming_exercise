/*
 * @Date: 2021-12-14 20:16:16
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-14 20:33:16
 * @Description: None
 */
#include <iostream>
using namespace std;

unsigned long long calculateFactorial(int);

int main()
{
    cout << "please input a digital to calculate factorial and enter '0' to exit:";
    int digital;
    while (cin >> digital)
    {
        if (digital == 0)
        {
            break;
        }
        cout << endl
             << "the result is " << calculateFactorial(digital)<<endl<<"continue?:";
    }
}

unsigned long long calculateFactorial(int digital)
{
    unsigned long long result = 1;
    for (int i = 1; i <= digital; ++i)
    {
        result *= i;
    }
    return result;
}