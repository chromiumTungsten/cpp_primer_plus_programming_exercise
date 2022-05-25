/*
 * @Date: 2021-11-30 11:29:51
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-11-30 11:48:17
 * @Description: None
 */
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char buffer[20];
    char *name;
    cout << "Enter your frist name: ";
    cin >> buffer;
    name = new char[strlen(buffer) + 1];
    strcpy(name, buffer);
    cout << endl
         << "Enter your last name: ";
    cin >> buffer;
    strcat(name, ", ");
    strcat(name, buffer);
    cout << endl
         << "Here's the information in a single: "<< name;
    delete [] name;
}