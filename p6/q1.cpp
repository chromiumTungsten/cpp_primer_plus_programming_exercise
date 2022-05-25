/*
 * @Date: 2021-12-01 16:23:44
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-01 16:59:13
 * @Description: None
 */
#include <cctype>
#include <iostream>
#include <ciso646>   //? g++不添加也可以通过编译，但是，vs code中的语法器报错。
using namespace std;

int main()
{
    char ch;
    cout << "Enter anything expect 'Q': ";
    while (cin.get(ch) and ch != '@')
    {
        if (!isdigit(ch))
        {
            if (isalpha(ch))
            {
                if (islower(ch))
                    cout << (char) toupper(ch);  //? 很奇怪，明明可以函数返回值设置为char， 非要我进行强制类型转换。
                else
                    cout << (char) tolower(ch);
            }else{
                cout<< ch;
            }
        }
    }
}