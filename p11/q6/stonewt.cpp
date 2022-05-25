#include "stonewt.h"

Stonewt::Stonewt(double _pound, int _stn, state ste)
{
    mode = ste;
    if (mode == STN)
    {
        stone = _stn + int(_pound) / Lbs_per_stn;
        lbs_left = _pound - int(_pound) / Lbs_per_stn * Lbs_per_stn;
        pounds = _stn * Lbs_per_stn + _pound;
    }
    else if (mode == LBS)
    {
        stone = _pound / Lbs_per_stn;
        pounds = _pound;
        lbs_left = _pound - Lbs_per_stn * stone;
    }
    else
    {
        std::cout << " error type of state and give a default stone\n";
        stone = lbs_left = pounds = 0;
    }
}

Stonewt::Stonewt()
{
    stone = lbs_left = pounds = 0;
}

Stonewt Stonewt::operator*(double d) const
{
    Stonewt news(0);
    news.pounds = pounds * d;
    news.stone = pounds / Lbs_per_stn;
    news.lbs_left = news.pounds - news.stone * Lbs_per_stn;
    return news;
}

Stonewt Stonewt::operator+(const Stonewt &s) const
{
    Stonewt news(0);
    news.pounds = pounds + s.pounds;
    news.stone = news.pounds / Lbs_per_stn;
    news.lbs_left = news.pounds - news.stone * Lbs_per_stn;
    return news;
}
Stonewt Stonewt::operator-(const Stonewt &s) const
{
    Stonewt news(0);
    news.pounds = pounds - s.pounds;
    news.stone = news.pounds / Lbs_per_stn;
    news.lbs_left = news.pounds - news.stone * Lbs_per_stn;
    return news;
}

Stonewt operator*(double d, const Stonewt &s)
{
    Stonewt news(0);
    news.pounds = s.pounds * d;
    news.stone = news.pounds / s.Lbs_per_stn;
    news.lbs_left = news.pounds - news.stone * s.Lbs_per_stn;
    return news;
}

std::ostream &operator<<(std::ostream &os, const Stonewt &s)
{
    if (s.mode == s.STN)
    {
        os << "Stone: " << s.stone << "pounds: " << s.lbs_left;
        return os;
    }
    else
    {
        os<<"pounds: "<<s.pounds;
        return os;
    }
}