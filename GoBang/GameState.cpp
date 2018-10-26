#include "GameState.h"
#include"ChessBoard.h"
#include<iostream>
using namespace std;
GameState::GameState()
{
    changeGameState(START);
}

GameState::~GameState()
{
    //dtor
}
void GameState::changeRunningState(GameRunningManager gameRunningManager,ChessBoard chessBoard)
{

}
void GameState::changeGameState(GameManager gameManager)
{
    if(gameManager==START)
    {
        cout<<"游戏开始了！"<<endl;
        cout<<"1. 人人对弈"<<endl;
        cout<<"2. 人机对弈"<<endl;
        int i;cin>>i;
        if(i==1)
            changeGameState(RUNNING);
        else
            changeGameState(CHOOSEVSMODE);
    }
    if(gameManager==CHOOSEVSMODE)
    {
        //略
    }
    if(gameManager==RUNNING)
    {
        ChessBoard chessBoard;
        changeRunningState(PLAYER1CHOOSE,chessBoard);
    }
}

