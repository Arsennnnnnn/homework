#include <iostream>
#include "A.h"

int main() {
    A obj1;
    A obj2;
    A obj3;
    A* obj4 = new A();
    std::cout << A::getCount() << std::endl;
    delete obj4;
    std::cout << A::getCount() << std::endl;
    return 0;
}