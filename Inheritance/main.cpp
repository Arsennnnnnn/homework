#include <iostream>
#include <set>
#include <unordered_set>

#include "Dog.h"
#include "Cat.h"
#include "Elephant.h"
#include "Horse.h"
#include "Bird.h"
#include "Fish.h"
#include "Zoo.h"
#include "Amphibian.h"



int main() {
    Dog dog("Doberman", "Rex");

    Dog dog1("Pit-Bull", "Lexa");
    std::set<Dog, Animal::AnimalCompare> animals;
    animals.insert(dog);
    animals.insert(dog1);
    std::unordered_set<Dog, Animal::AnimalHash ,Animal::AnimalCompare> animals1;
    animals1.insert(dog);
    animals1.insert(dog1);
    return 0;
}