#ifndef PRINT_H
#define PRINT_H
#include <iostream>

void print() {
    std::cout << "end" << std::endl;
}

template<typename T, typename... Args>
void print(T type, Args... args) {
    std::cout << type << std::endl;
    print(args...);
}


#endif //PRINT_H
