/*
 * @Date: 2021-12-23 17:07:52
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-23 17:27:09
 * @Description: 探究 : 是赋值还是指针；
 */

#include <iostream>
using namespace std;

int main()
{
    char nnn[] = "nnn";
    for (char i : nnn)
    {
        i = 'm';
    }
    cout << nnn[0];

    // int *mmm  = new int[3];
    // mmm[0] = 1;
    // mmm[1] = 2;
    // mmm[3] = 3;
    // for(int i: mmm){
    //    cout <<
    // }
    int mmm[3] {1,2,3};
    for(int i: mmm){
        cout<< i;
    }
}

//! 是复制，而非调用地址。并且，我发现指针声明的地址不能使用, 只有带数字符号的[]的参数才能使用，真是太奇怪了。