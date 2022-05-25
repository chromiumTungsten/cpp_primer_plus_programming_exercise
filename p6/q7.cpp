
/*
 * @Date: 2021-12-02 17:19:26
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-03 12:37:22
 * @Description: None
 */

#include <ciso646>
#include <cctype>
#include <iostream>
#include <ciso646>
#include <string>
using namespace std;

int main()
{
    cout << "Enter words(q to quit):" << endl;
    char ch;
    int count, num_o, num_f;
    string *words = new string[50000];
    while (cin.get(ch))
    {
        if (isalpha(ch))
        {
            if (ch == 'q')
            {
                cin.get(ch);
                if (ch == '\n')
                    break;
                words[count] += "q";
                words[count] += ch;
            }
            else
                words[count] += ch;
        }
        else if (ch == ' ' or ch == '\n')
        {
            cin.get(ch);
            if (isalpha(ch))
            {
                if (ch == 'q')
                {
                    cin.get(ch);
                    if (ch == '\n')
                        break;
                    words[count] += "q";
                    words[count] += ch;
                }
                else
                    words[count] += ch;
                ++count;
            }
        }
    }
    ++count;
    num_o = 0;   //! 为什么初始化num_0呢？因为这里不将num_0赋值为0，他将会是一个4199705这个值，到底是为什么呢？？？？
    for (int i = 0; i < count; i++)
    {
        char init = words[i][0];
        if (init == 'a' or init == 'e' or init == 'i' or init == 'o' or init == 'u')
            ++num_o;
        else
            ++num_f;
    }
    cout << endl
         << num_o << "    " << num_f << "   " << count;
    delete[] words;
}