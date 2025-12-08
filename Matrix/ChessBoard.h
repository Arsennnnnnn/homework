#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include "classMatrix.h"
template <typename T>
class ChessBoard : public matrix<T> {
private:
    int m_size;
public:
    ChessBoard();
    ChessBoard (const ChessBoard&) = default;
    ChessBoard<T>& operator = (const ChessBoard&) = default;
    ChessBoard (ChessBoard&&) = default;
    ChessBoard<T>& operator = (ChessBoard&&) = default;
    ~ChessBoard() override = default;
};

#endif //CHESSBOARD_H
