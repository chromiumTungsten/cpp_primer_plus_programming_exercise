#include "mytime3.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time operator+(const Time &t, const Time &t2)
{
    Time sum;
    sum.minutes = t.minutes + t2.minutes;
    sum.hours = t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time operator-(const Time &t, const Time &t2)
{
    Time sum;
    int tot1, tot2;
    tot1 = t.minutes + 60 * t.hours;
    tot2 = t2.minutes + 60 * t2.hours;
    sum.minutes = (tot1 - tot2) % 60;
    sum.hours = (tot1 - tot2) / 60;
    return sum;
}

Time operator*(const Time &t, double m)
{
    Time restult;
    long tot = t.hours * m * 60 + t.minutes * m;
    restult.hours = tot / 60;
    restult.minutes = tot % 60;
    return restult;
}

Time operator*(double m, const Time &t)
{
    Time restult;
    long tot = t.hours * m * 60 + t.minutes * m;
    restult.hours = tot / 60;
    restult.minutes = tot % 60;
    return restult;
}

std::ostream &operator<<(std::ostream &os, const Time &t)
{
    os << t.hours << "hours, " << t.minutes << "minutes";
    return os;
}