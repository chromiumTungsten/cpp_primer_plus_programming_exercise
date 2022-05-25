/*
 * @Date: 2021-11-30 11:45:29
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-11-30 11:47:44
 * @Description: None
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string buffer;
    string name;
    cout << "Enter your frist name: ";
    cin >> name;
    cout << endl
         << "Enter your last name: ";
    cin >> buffer;
    name = name +", "+ buffer;
    cout << endl
         << "Here's the information in a single: "<< name;
}