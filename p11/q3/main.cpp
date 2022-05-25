#include "vector.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    int N;
    int assum_max = 0;
    int assum_min = 200000000;
    int sum = 0;
    cout << "Enter target distance(q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
        {
            break;
        }
        cout << "Enter test times: ";
        if (!(cin >> N))
        {
            break;
        }
        for (int i = 0; i < N; i++)
        {
            while (result.magval() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction);
                result = result + step;
                steps++;
            }
            if (assum_max < steps)
            {
                assum_max = steps;
            }
            else if (assum_min > steps)
            {
                assum_min = steps;
            }
            sum += steps;
            steps = 0;
            result.reset(0.0, 0.0);
        }
        double aver = sum / N;
        cout << "max: " << assum_max << endl
             << "min: " << assum_min << endl
             << "average: " << aver << endl
             << "Enter q to exit: ";
    }
}