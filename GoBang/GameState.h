#ifndef GAMESTATE_H
#define GAMESTATE_H
#include"ChessBoard.h"

class GameState
{
    public:
        GameState();
        virtual ~GameState();
        enum GameManager
        {
            START,
            CHOOSEVSMODE,
            RUNNING,
            ENDSTATE
        };
        enum GameRunningManager
        {
            PLAYER1CHOOSE,
            PLAYER2CHOOSE,
            AICHOOSE,
            END
        };
        void changeGameState(GameManager gameMagaer);
        void changeRunningState(GameRunningManager gameRunningManager,ChessBoard chessBoard);
    protected:

    private:
};

#endif // GAMESTATE_H
