#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>
class Complex
{
private:
    double real;
    double im;

public:
    Complex(/* args */);
    Complex(double _real, double _im = 0);
    ~Complex();
    Complex operator+(const Complex &c) const;
    Complex operator-(const Complex &c) const;
    friend Complex operator*(const Complex &c, const Complex &s);
    Complex operator~() const;
    friend std::ostream &operator<<(std::ostream &os, const Complex &c);
    friend bool operator>>(std::istream &is, Complex &c);
};

#endif
