/*
 * @Date: 2021-12-14 18:33:43
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-14 18:53:01
 * @Description: None
 */
#include <iostream>
using namespace std;

struct Box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void printBoxInfo(Box);
void calculateVolume(Box *);

int main()
{
    Box box = {"chunyin01", 10, 10, 10};
    calculateVolume(&box);
    printBoxInfo(box);
}

void printBoxInfo(Box box)
{
    cout << "maker:" << box.maker << endl
         << "height:" << box.height << endl
         << "width:" << box.width << endl
         << "length:" << box.length << endl
         <<"Volume"<<box.volume<<endl;
}

void calculateVolume(Box *box){
    box->volume = box->height*box->length*box->width;
}