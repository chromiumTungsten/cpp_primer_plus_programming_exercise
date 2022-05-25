/*
 * @Date: 2021-12-15 00:10:29
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-15 00:22:49
 * @Description: 测试返回指针时，内存空间是否被释放。
 ! 返回指针时，在函数中分配的指针不会被释放。而传入指针再分配的内存会被函数释放掉。
 */
#include <iostream>
using namespace std;

void test2(char*_b);
int main(){
    char *b;
    test2(b);
    cout<<b;
}

void test2(char*_b){
    _b = new char[2];
    _b[0] = 'a';
    _b[1] = '\0';
}