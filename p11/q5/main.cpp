#include "stonewt.h"

int main()
{
    using std::cout;
    using std::endl;
    Stonewt s, s5, s6, s7;
    Stonewt s2(100);
    Stonewt s3(12, 2, Stonewt::STN);
    Stonewt s4(12, 2, Stonewt::LBS);
    s = s2 + s3;
    s5 = 5 * s2;
    s6 = s3 * 5;
    s5.set_mode_stn();
    s7 = s2 - s3;
    cout << "s1:" << s << endl
         << "s2:" << s2 << endl
         << "s3:" << s3 << endl
         << "s4:" << s4 << endl
         << "s5:" << s5 << endl
         << "s6:" << s6 << endl
         << "s7:" << s7 << endl;
}
