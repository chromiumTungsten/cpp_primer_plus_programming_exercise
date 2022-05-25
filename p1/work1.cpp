/*
 * @Date: 2021-11-28 16:07:12
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-11-28 17:18:40
 * @Description: The file for p150,1,7；终端输入有缓存区，使用cin>>依然会残留一行在缓存区中，含/n；cin.get()会获取缓存区中的最后一个空字符'/0'，所以一个cin.get()会直接退出。
 */
#include <iostream>
using namespace std;

int main()
{
     char check;
     int hours, minutes;
     cout << "Enter the number of hours:";
     cin >> hours;
     cout << endl
          << "Enter the number of minutes:";
     cin >> minutes;
     cout << endl
          << "Time:" << hours << ":" << minutes << endl << "Please type any to continiue";
     cin.get();
     cin.get();
}