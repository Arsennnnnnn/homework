#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include "classMatrix.h"

class ChessBoard : public matrix {
private:
    int m_size;
public:
    ChessBoard();
    ~ChessBoard() override = default;
};

#endif //CHESSBOARD_H
