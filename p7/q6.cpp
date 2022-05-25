/*
 * @Date: 2021-12-14 22:16:40
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-14 23:44:27
 * @Description: None
 */
#include <iostream>
#include <list>
using namespace std;

int fillList(double *, const int);
void showList(double *, const int);
void reverseList(double *, const int);

int main()
{
    cout << "please enter the count of digitals you will input at most:";
    int max_count;
    cin >> max_count;
    double *arry_doubles = (double *) malloc(max_count*sizeof(double))  ;
    const int counts = fillList(arry_doubles, max_count);
    showList(arry_doubles, counts);
    reverseList(arry_doubles, counts);
    free(arry_doubles);
}

int fillList(double *_array, const int _max_count)
{
    int count = 0;
    for (count; count < _max_count; ++count)
    {
        cout << endl
             << " please input the double:";
        if(! (cin >> _array[count])) {
            break;
        }
    }
    return count;
}

void showList(double *_array, const int count)
{
    cout << endl
         << "the doubles:";
    for (int i = 0; i < count; ++i)
    {
        cout << endl
             << _array[i];
    }
}

void reverseList(double *_array, const int count)
{
    cout << endl
         << "reverse:";
    for (int i = count - 2; i > 0; --i)
    {
        cout << endl
             << _array[i];
    }
}