#ifndef CHESSBOARD_H
#define CHESSBOARD_H
#include<iostream>
using namespace std;
class ChessBoard
{
    public:
        ChessBoard();
        virtual ~ChessBoard();
        char myChessBoard[19][19];
        void initChessBoard();
        void changeChessBoard(pair<int,int> p,int id);
        void whoWin();
        void print();
    protected:

    private:
};

#endif // CHESSBOARD_H
