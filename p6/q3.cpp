/*
 * @Date: 2021-12-01 23:14:56
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-02 00:10:56
 * @Description: None
 */
#include <ciso646>
#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter one of the following choices:" << endl
         << "c)carnivore                  p)pianist" << endl
         << "t)tree                       g)game" << endl;
    char ch;
    bool is_get_a_value = false;
    while (cin.get(ch))
    {
        if (cin.get() != '\n')
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << endl
                 << "please input a p,t,c or g:";
            continue;
        };
        switch (ch)
        {
        case 'p':
        {
            cout << endl
                 << "a pianist";
            is_get_a_value = true;
        }
        break;
        case 'c':
        {
            cout << endl
                 << "a carnivore";
            is_get_a_value = true;
        }
        break;
        case 'g':
        {
            cout << endl
                 << "a  game";
            is_get_a_value = true;
        }
        break;
        case 't':
        {
            cout << endl
                 << "a tree";
            is_get_a_value = true;
        }
        break;
        default:
        {
            cout << endl
                 << "please input a p,t,c or g:";
        }
        break;
        }
        if (is_get_a_value)
            break;
    }
}