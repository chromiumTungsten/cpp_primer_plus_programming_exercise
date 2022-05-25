/*
 * @Date: 2021-12-02 17:01:01
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-02 17:19:06
 * @Description: None
 */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inFile;
    string content;
    double donation;
    inFile.open("test.txt");
    if (!inFile.is_open())
    {
        cout << "Could't not open the file" << endl;
        exit(EXIT_FAILURE);
    }
    getline(inFile, content);
    cout << "the numeber of people is " << content << endl;
    while (getline(inFile, content))
    {
        cout << "name:" << content;
        inFile >> donation;
        inFile.get();
        cout << "      number: " << donation << endl;
    }
}