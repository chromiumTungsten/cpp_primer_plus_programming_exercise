#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
public:
    enum state
    {
        STN,
        LBS,
    };
private:
    enum{Lbs_per_stn = 14};
    state mode;
    int stone;
    double lbs_left;
    double pounds;
public:
    Stonewt(double _pounds, int _stn = 0,state ste = LBS);
    Stonewt();
    void set_mode_stn(){ mode = STN;}
    void set_mode_lbs(){ mode = LBS;}
    Stonewt operator+(const Stonewt &s) const;
    Stonewt operator-(const Stonewt &s) const;
    Stonewt operator*(double d) const;
    friend Stonewt operator*(double d, Stonewt const &s );
    friend std::ostream& operator<<(std::ostream &os, Stonewt const &s);
    bool operator>(const Stonewt &s) const{ return pounds > s.pounds;}
    bool operator<(const Stonewt &s) const{ return pounds < s.pounds;}
    bool operator==(const Stonewt &s) const{
        return pounds == s.pounds;
    }
    bool operator>=(const Stonewt &s) const{return pounds >= s.pounds;}
    bool operator<=(const Stonewt &s) const{
        return pounds <= s.pounds;
    }
    bool operator!=(const Stonewt &s) const{
        return pounds != s.pounds;
    }
};

#endif
