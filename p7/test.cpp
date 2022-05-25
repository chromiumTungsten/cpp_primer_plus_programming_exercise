/*
 * @Date: 2021-12-14 11:02:38
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-14 16:55:02
 ? Description: test the "void* ".I can't under stand why the 'for' or 'while' loop use the operate 'void*'.
 */
#include <iostream>

int main() {
    struct A {
        operator void * () const {
            std::cout << "hehe\n";
            return nullptr;
        }
    };
    void *a = A();

    if (a) {
        std::cout << "haha\n";
    }
}

