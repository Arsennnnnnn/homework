#ifndef ZOO_H
#define ZOO_H

#include "Animal.h"

class Zoo {
private:
    Animal** m_animals;
    int m_size;
public:
    Zoo() = default;
    Zoo(Animal** animals, int count);
    ~Zoo();
};

#endif // ZOO_H
