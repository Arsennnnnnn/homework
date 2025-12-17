#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Elephant.h"
#include "Horse.h"
#include "Bird.h"
#include "Fish.h"
#include "Zoo.h"
#include "Amphibian.h"

template <typename T>
void checkAnimal(T* obj) {
    if (dynamic_cast<Animal*>(obj)) {
        std::cout << "obj is an animal" << std::endl;
    } else {
        std::cout << "obj is not an animal" << std::endl;;
    }
}



int main() {
    Dog dog("", "");
    checkAnimal(&dog);
    Amphibian a;
    checkAnimal(&a);
    return 0;
}