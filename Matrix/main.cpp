#include <iostream>
#include "classMatrix.h"
#include "ChessBoard.h"

int main() {

    matrix mat(5, 5);
    matrix mat2;
    matrix* matt = new matrix(5, 5);
    matrix mat3 = std::move(mat);
    std::cout << matrix::getCount() << std::endl;
    delete matt;
    std::cout << matrix::getCount() << std::endl;
    return 0;
}

