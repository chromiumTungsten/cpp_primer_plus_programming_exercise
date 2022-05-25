/*
 * @Date: 2021-12-30 16:46:50
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-30 17:27:30
 * @Description: None
 */
#include <iostream>
#include <cstring>
struct CandyBar
{
    char *name;
    double weight;
    int kar;
};

const CandyBar &setCandyBar(CandyBar &_candy_bar,const char _name[] = "Millennium Munch", const double _weight = 2.85, const int _kar = 350);
void showCandyBar(const CandyBar &_candy_bar);

int main()
{
    CandyBar candy_bar;
    showCandyBar(setCandyBar(candy_bar));
}

const CandyBar &setCandyBar(CandyBar &_candy_bar, const char _name[], const double _weight, const int _kar)
{
    using namespace std;
    _candy_bar.kar = _kar;
    _candy_bar.weight = _weight;
    int len = strlen(_name) + 1;
    _candy_bar.name = new char[len];
    for (int i = 0; i < len; i++)
    {
        _candy_bar.name[i] = _name[i];
    }
    return _candy_bar;
}

void showCandyBar(const CandyBar &_candy_bar)
{
    using namespace std;
    cout << "name: " << _candy_bar.name << endl
         << "Weight: " << _candy_bar.weight << endl
         << "Kar: " << _candy_bar.kar;
}