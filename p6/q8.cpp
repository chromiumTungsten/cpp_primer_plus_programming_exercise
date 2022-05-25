/*
 * @Date: 2021-12-02 16:31:17
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-02 16:55:39
 * @Description: None
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream inFile;
    int num;
    char value;
    inFile.open("test.txt");
    if (!inFile.is_open())
    {
        cout << "Could't not open the file" << endl;
        exit(EXIT_FAILURE);
    }
    inFile >> value;
    while (inFile.good())
    {
         ++num;
        inFile >> value;
    }
    cout<<"number count as "<< num << endl;
    inFile.close();
    return 0;
}