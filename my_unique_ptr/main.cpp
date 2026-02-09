#include <iostream>
#include "my_unique_ptr.h"


int main() {
    my_unique_ptr<int> ptr(new int(42));
    std::cout << ptr.get() << std::endl;

    return 0;
}