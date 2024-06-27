//
//  main.cpp
//  Connect 4 Game
//
//  Created by Ali CH on 16/07/2022.
//

#include <iostream>
#include "Connect4Game.h"


using namespace std;

void printLastMsg(){
  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t************************************\n"
       << "\t\t\t\t\t*      Thank you for playing       *\n"
       << "\t\t\t\t\t************************************\n\n\n\n\n\n\n\n\n\n\n\n";
 
}
int main(){
  Connect4Game game;
  int pos, choice; bool win=false;
  game.initBoard(BOARD_SIZE);
  game.start();
  cout << '\n';
 
  while(!(game.isBoardFull() || win)){
    cout << "Player:" << game.getTurn() << '\n';
    cout << "Enter Column No (0-6): ";
    cin >> pos;
    if(game.rowsLeft(pos) < 0){
      cout << "Column has filled up. Select any other.\n";
      continue;
    }
    game.insertValue(pos);
    win = game.isWin(game.getTurn());
    //system("clear");
    game.showBoard();
    game.switchTurn(game.getTurn());
  }
  if(game.isWin(PLAYER1))
    cout << "\n"
         << "Player 1 has won the game.\n";
  else
    cout << "\n"
         << "Player 2 has won the game.\n";
  cout << "Enter 1 to play again: ";
  cin >> choice;
  if(choice==1)  main();
  else
  {
      printLastMsg();
  }
  return 0;
}
