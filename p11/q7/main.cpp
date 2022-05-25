#include "complex.h"

int main()
{
    using namespace std;
    Complex a(3.0, 4.0);
    Complex c;
    cout << "Enter a complex number (q to quit): \n";
    while (cin >> c)
    {
        cout << "c is " << c << endl
             << "complex conjugate is " << ~c << endl
             << "a is " << a << endl
             << "a +c is " << a+c << endl
             << "a-c is "<<a-c <<endl
             <<"a*c is " <<a*c<< endl
             <<"5*c is " << 5.0*c<< endl;
             cout << "Enter a complex number: \n";
    }
    cout<<"Done! \n";
    return 0;
}
