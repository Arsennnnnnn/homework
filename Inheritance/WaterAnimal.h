#ifndef WATERANIMAL_H
#define WATERANIMAL_H

#include "Animal.h"
//abstract
class WaterAnimal : virtual Animal {
public:
    WaterAnimal() = default;
    ~WaterAnimal() override = default;
};

#endif //WATERANIMAL_H
