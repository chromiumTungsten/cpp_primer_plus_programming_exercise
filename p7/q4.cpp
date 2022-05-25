/*
 * @Date: 2021-12-14 18:53:57
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-14 19:19:27
 * @Description: None
 */
#include <iostream>
using namespace std;

long double proability(unsigned, unsigned);

int main()
{
    double total[2], chioce[2];
    cout << "Enter the total number of choice on the game card and  the number of picks allowed:";
    cin >> total[0] >> chioce[0];
    cout << endl
         << "Enter anthor total number of choice on the game card and  the number of picks allowed:";
    cin >> total[1] >> chioce[1];
    cout << endl
         << "you have one chance in " << proability(total[0], chioce[0]) * proability(total[1], chioce[1]) << "to get the head prize";
}

long double proability(unsigned numbers, unsigned picks)
{
    long double result = 1;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
    {
        result *= p/n;
    }
    return result;
}