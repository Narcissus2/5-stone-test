#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>
#include"ChessBoard.h"
using namespace std;

class Player
{
    public:
        Player();
        virtual ~Player();
        int playerID;
        void playerMove();
        void moveCursor(ChessBoard chessBoard,int playerID);
        pair<int,int> choosePos(ChessBoard chessBoard,int palyerID);
    protected:

    private:
};

#endif // PLAYER_H
