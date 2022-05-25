#include "complex.h"

Complex::Complex()
{
    real = im = 0.0;
}
// Complex::Complex(double _real){
//     real = _real;
//     im = 0;
// }

Complex::Complex(double _real, double _im)
{
    real = _real;
    im = _im;
}

Complex::~Complex()
{
}

// Complex Complex::operator*(const Complex &c) const
// {
//     Complex nc;
//     nc.real = real * c.real - im * c.im;
//     nc.im = real * c.im + im * c.real;
//     return nc;
// }

Complex operator*(const Complex &s, Complex const &c)
{
    return  Complex(s.real*c.real - s.im*c.im, s.real*c.im+s.im*c.real);
}

Complex Complex::operator+(const Complex &c) const
{
    Complex nc;
    nc.real = real + c.real;
    nc.im = im + nc.im;
    return nc;
}

Complex Complex::operator-(const Complex &c) const
{
    return Complex(real + c.real, im + c.im);
}

Complex Complex::operator~() const
{
    return Complex(real, -im);
}

std::ostream & operator<<(std::ostream &os, const Complex &c){
    os<<c.real<<"+"<<c.im<<"i";
    return os;
}

bool operator>>(std::istream &is,Complex &c){
    std::cout<<"please enter real: ";
    if(!(is>>c.real)){
        std::cout << "\nenter error real";
        return false;
    }
    std::cout<<"\nplease enter im:";
    if(!(is >> c.im)){
        std::cout << "\nenter error im";
        return false;
    }
    return true;
}