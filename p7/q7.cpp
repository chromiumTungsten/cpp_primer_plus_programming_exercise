/*
 * @Date: 2021-12-23 17:30:13
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-23 18:44:06
 * @Description: None
 */

#include <iostream>
const int Max = 5;

double *fill_array(double[], int);
void show_array(const double[], double *);
void revalue(double r, double ar[], double *);

int main()
{
    using namespace std;
    double propertisep[Max];

    double *end = fill_array(propertisep, Max);
    show_array(propertisep, end);
    if (propertisep != end)
    {
        cout << "Enter revaluation factor:";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Bad input; please enter a number: ";
        }
        revalue(factor, propertisep, end);
        show_array(propertisep, end);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}
double *fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; ++i)
    {
        cout << "Enter value #" << (i + 1) << ":";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
        {
            break;
        }
        ar[i] = temp;
    }
    return ar + i;
}

void show_array(const double ar[], double *_end)
{
    using namespace std;
    int i = 0;
    while (ar != _end)
    {
        cout << "Property #" << (i + 1) << ":$";
        cout << *ar << endl;
        ++ar;
        ++i;
    }
}

void revalue(double r, double ar[], double *_end)
{
    while (ar != _end)
    {
        *ar *= r;
        ++ar;
    }
}