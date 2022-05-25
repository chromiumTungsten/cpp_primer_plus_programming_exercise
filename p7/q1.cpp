/*
 * @Date: 2021-12-14 00:08:04
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-14 17:20:20
 */

#include <iostream>
using namespace std;

double harmonic_mean(double, double);
auto harmonicMean = [](double a, double b){ return 2*a*b/(a+b); };
auto confirm = [](bool ifInputADigital) ->bool 
{if (ifInputADigital)
{
    return true;
}else{
    cout<<endl<<"please input digital and run program again";
    return false;
}
};

int main()
{
    double a[1000];
    cout << "please input couples of number to caculate harmonic mean:" << endl;
    for (int i = 0;confirm((bool)(cin>>a[i])); ++i)
    {
        if (a[i] == 0)
        {
            break;
        }
        if (i % 2)
        {
            cout << "The harmonic mean is " << harmonicMean(a[i - 1], a[i]) << endl
                 << "continue or input '0' to exit: ";
        }
    }
}

double harmonic_mean(double a, double b)
{
    return 2 * a * b / (a + b);
}