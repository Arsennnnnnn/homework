#include "A.h"

int A::count = 0;;

A::A() {
    ++count;
}

A::~A() {
    --count;
}

int A::getCount() {
    return count;
}
