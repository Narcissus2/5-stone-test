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
        cout<<"��Ϸ��ʼ�ˣ�"<<endl;
        cout<<"1. ���˶���"<<endl;
        cout<<"2. �˻�����"<<endl;
        int i;cin>>i;
        if(i==1)
            changeGameState(RUNNING);
        else
            changeGameState(CHOOSEVSMODE);
    }
    if(gameManager==CHOOSEVSMODE)
    {
        //��
    }
    if(gameManager==RUNNING)
    {
        ChessBoard chessBoard;
        changeRunningState(PLAYER1CHOOSE,chessBoard);
    }
}

