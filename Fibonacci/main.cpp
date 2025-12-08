#include <iostream>
#include "fibo.h"

int main() {
    std::cout << fibo<5>::value << std::endl;
    std::cout << fibo<10>::value << std::endl;
    std::cout << fibo<50>::value << std::endl;
    std::cout << fibo<100>::value << std::endl;
    return 0;
}
