#ifndef AMPHIBIAN_H
#define AMPHIBIAN_H

#include "WaterAnimal.h"
#include "LandAnimal.h"

class Amphibian : public WaterAnimal, public LandAnimal {
public:
    void makeSound() override;
    void Move() override;
};

#endif //AMPHIBIAN_H
