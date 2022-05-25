#include <cmath>
#include "vector.h"

using std::atan;
using std::atan2;
using std::cos;
using std::cout;
using std::sin;
using std::sqrt;

namespace VECTOR
{
    const double Rad_to_deg = 45.0 / atan(1.0);

    double Vector::magval() const
    {
        return sqrt(x * x + y * y);
    }

    double Vector::angval() const
    {
        if (x == 0.0 && y == 0.0)
        {
            return 0.0;
        }
        else
        {
            return atan2(y, x);
        }
    }

    void Vector::set_x(double mag, double ang)
    {
        x = mag* cos(ang);
    }

    void Vector::set_y(double mag, double ang)
    {
        y = mag * sin(ang);
    }

    Vector::Vector()
    {
        x = y = 0;
        mode = RECT;
    }

    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
        }
        else if (form == RECT)
        {
            set_x(n1, n2/Rad_to_deg);
            set_y(n1, n2/Rad_to_deg);
        }
        else
        {
            cout << "Incorrect 3rd argument to Vector() --";
            cout << "vector set to 0\n";
            x = y = 0.0;
            mode = RECT;
        }
    }

    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
        }

        else if (form == POL)
        {
            set_x(n1, n2/Rad_to_deg);
            set_y(n1, n2/Rad_to_deg);
        }
        else
        {
            cout << "Incorret 3rd argument to Vector() --";
            cout << "vector set to 0\n";
            x = y = 0.0;
            mode = RECT;
        }
    }
    Vector::~Vector()
    {
    }
    void Vector::polar_mode()
    {
        mode = POL;
    }
    void Vector::rect_mode()
    {
        mode = RECT;
    }
    Vector Vector::operator+(const Vector &b) const
    {
        return Vector(x + b.x, y + b.y);
    }

    Vector Vector::operator-(const Vector &b) const
    {
        return Vector(x - b.x, y - b.y);
    }

    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }

    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }

    Vector operator*(double n, const Vector &a)
    {
        return Vector(n * a.x, n * a.y);
    }

    std::ostream &operator<<(std::ostream &os, const Vector &v)
    {
        if (v.mode == v.RECT)
        {
            return os << "(x,y) = (" << v.x << "," << v.y << ")";
        }
        else
        {
            return os << "(distance, theta) = (" <<v.magval() << "," <<v.angval() << ")";
        }
    }
}
