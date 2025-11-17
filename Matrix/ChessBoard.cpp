#include <iostream>
#include "classMatrix.h"
#include "ChessBoard.h"

ChessBoard::ChessBoard()
    : matrix(8, 8), m_size(8) {
    for (int i = 0; i < m_size; ++i)
        for (int j = 0; j < m_size; ++j) {
            if ((i + j) % 2 == 0)
                (*this)[i][j] = 0;
            else
                (*this)[i][j] = 1;
        }
}


