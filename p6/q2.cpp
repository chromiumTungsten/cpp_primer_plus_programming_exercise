/*
 * @Date: 2021-12-01 22:43:04
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-01 23:14:22
 * @Description: None
 */
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<double, 10> donation;
    double ava, sum;
    int num;
    cout << " Input the numbers:" << endl;
    for (int i = 0; i < 10; ++i)
    {
        if (!(cin >> donation[i]))
            break;
        ++num;
    }

    for (double x : donation)
        sum += x;
    ava = sum / num;
    num = 0;
    for (double x : donation)
    {
        if (x > ava)
            ++num;
    }
    cout << "average is " << ava << " and the number of number bigger than the average  is " << num;
}