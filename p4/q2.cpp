/*
 * @Date: 2021-11-30 10:55:13
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-11-30 11:30:49
 * @Description: None
 */
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    string dessert;
    cout << "Enter your name: \n";
    getline(cin, name);
    cout << "Enter your favorite dessert: \n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert << "for you, " << name << endl;
}