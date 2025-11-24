#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include "classMatrix.h"

class ChessBoard : public matrix {
private:
    int m_size;
public:
    ChessBoard();
    ChessBoard (const ChessBoard&) = default;
    ChessBoard& operator = (const ChessBoard&) = default;
    ChessBoard (ChessBoard&&) = default;
    ChessBoard& operator = (ChessBoard&&) = default;
    ~ChessBoard() override = default;
};

#endif //CHESSBOARD_H
