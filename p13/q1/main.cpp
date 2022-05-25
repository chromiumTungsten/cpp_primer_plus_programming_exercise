#include "cd.h"
#include <iostream>

void Bravo(const Cd &disk);

int main()
{
    using namespace std;
    Cd c1("Beatles", "Capital", 14, 35.5);
    Classic c2("Alfred Brendel", "Philips", 2, 57.17, {"Piano Sonata in B flat", "Fantsia in C"});
    Cd *pcd = &c1;
    cout << "using object directly: " << endl;
    c1.Report();
    c2.Report();

    cout << "Using type cd * pointer to obect:\n";
    pcd->Report();
    pcd = &c2;
    pcd->Report();

    cout << "Calling a function with a Cd reference  argumet:\n";
    Bravo(c1);
    Bravo(c2);

    cout << "Testing assignment: ";
    Classic copy;
    copy = c2;
    copy.Report();
    return 0;
}

void Bravo(const Cd &disk)
{
    disk.Report();
}