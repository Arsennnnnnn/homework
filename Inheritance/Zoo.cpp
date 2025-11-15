#include "Zoo.h"
#include <iostream>

Zoo::Zoo(Animal** animals, int count)
    : m_size(count) {
    m_animals = new Animal*[m_size];
    for (int i = 0; i < m_size; ++i) {
        m_animals[i] = animals[i];
    }
}

Zoo::~Zoo() {
    for (int i = 0; i < m_size; ++i) {
        delete m_animals[i];
    }
    delete[] m_animals;
}