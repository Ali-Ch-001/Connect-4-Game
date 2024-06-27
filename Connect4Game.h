//
//  Connect4Game.h
//  Connect 4 Game
//
//  Created by Ali CH on 16/07/2022.
//

#ifndef CONNECT4GAME_H
#define CONNECT4GAME_H
#define BOARD_SIZE 7
#define PLAYER1 1
#define PLAYER2 2



class Connect4Game{
  int **board, turn, SIZE;
public:
  void initBoard(int);
  void showBoard();
  void start();
  int getTurn();
  void insertValue(int);
  void switchTurn(int);
  int rowsLeft(int);
  bool isWin(int);
  bool isBoardFull();
};
#endif
