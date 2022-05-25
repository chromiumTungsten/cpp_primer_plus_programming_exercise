/*
 * @Date: 2021-12-02 14:35:47
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-02 15:36:51
 * @Description: None
 */
#include <iostream>
#include <string>
using namespace std;
struct bop
{
    string fullname;
    string title;
    string bopname;
    int preference;
};

int main()
{
    cout << "Benevolent Order of Programmers Report" << endl
         << "a. display by name      b. display by tittle " << endl
         << "c. display by bopname   d. display by preferance" << endl
         << "q. quit" << endl
         << "Enter your choice: ";
    bop people[5] = {
        {"Wimp Macho", "Raki Rhodes", "Celia Laiter", 1},
        {"Raki Rhodes", "TITTLE", "Junior Programmer", 3},
        {"Celia Later", "MIPS", "Bop Name", 2},
        {"Hoppy Hipman", "TITTLE", "Analyst Trainee", 3},
        {"Pat Hand", "LOOPY", "Bop Name", 2}};
    char ch;
    bool is_quit = false;
    while (cin.get(ch))
    {
        cout << endl;
        if (cin.get() != '\n')
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "please enter a a,b,c,d or q:";
            continue;
        }
        switch (ch)
        {
        case 'a':
        {
            for (bop x : people)
            {
                cout << x.fullname << endl;
            }
            cout << "Next choice: ";
        }
        break;
        case 'b':
        {
            for (bop x : people)
            {
                cout << x.title << endl;
            }
            cout << "Next choice: ";
        }
        break;
        case 'c':
        {
            for (bop x : people)
            {
                cout << x.bopname << endl;
            }
            cout << "Next choice: ";
        }
        break;
        case 'd':
        {
            for (bop x : people)
            {
                switch (x.preference)
                {
                case 1:
                {
                    cout << x.fullname << endl;
                }
                break;
                case 2:
                {
                    cout << x.title << endl;
                }
                break;
                case 3:
                {
                    cout << x.bopname << endl;
                }
                break;
                default:
                    break;
                }
            }
            cout << "Next choice: ";
        }
        break;
        case 'q':{
            cout<<"Bye!";
            is_quit = true;
        }break;
        default:
        {
            cout << "please enter a a,b,c,d or q:";
        }
        break;
        }
        if (is_quit)
        {
            break;
        }
    }
}