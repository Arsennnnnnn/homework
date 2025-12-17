#ifndef LANDANIMAL_H
#define LANDANIMAL_H

#include "Animal.h"
//abstract
class LandAnimal : virtual public Animal {
public:
    LandAnimal() = default;
    ~LandAnimal() override = default;
};

#endif //LANDANIMAL_H
