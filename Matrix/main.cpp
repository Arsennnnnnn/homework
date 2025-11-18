#include <iostream>
#include "classMatrix.h"
#include "ChessBoard.h"

int main() {
    ChessBoard cb;
    ChessBoard cb1 = cb;

    std::cout << cb << std::endl;
    std::cout << cb1 << std::endl;
    return 0;
}

