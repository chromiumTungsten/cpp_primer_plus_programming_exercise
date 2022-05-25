#include "stonewt.h"

int main()
{
    using std::cout;
    using std::endl;
    Stonewt arr[6] = {Stonewt(100), Stonewt(5), Stonewt(20)};
    for (int i = 3; i < 6; ++i)
    {
        arr[i] = arr[1] * (i - 1);
    }
    Stonewt assum_max = arr[1];
    Stonewt assum_min = arr[1];
    cout << " the stone > 11 : \n";
    for (int i = 0; i < 6; ++i)
    {
        if (assum_max < arr[i])
        {
            assum_max = arr[i];
        }
        else if (assum_min > arr[i])
        {
            assum_min = arr[i];
        }
        if (arr[i] > 11)
        {
            cout << arr[i] << endl;
        }
    }
    cout << "The max " << assum_max << endl
         << "The min " << assum_min << endl;
}
