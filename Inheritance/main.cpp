#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Elephant.h"
#include "Horse.h"
#include "Bird.h"
#include "Fish.h"
#include "Zoo.h"
int main() {
    Animal* arr[3];

    arr[0] = new Dog("Dog", "Rex");
    arr[1] = new Cat("Cat", "Mimi");
    arr[2] = new Bird("Bird", "Koko");

    Zoo zoo(arr, 3);

    for (int i = 0; i < 3; ++i) {
        delete arr[i];
    }
    return 0;
}