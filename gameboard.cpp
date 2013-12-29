#include<iostream>
#include<vector>
#include"gameboard.h"
#include"tile.h"

using namespace std;

gameboard::gameboard(string temp)
{
  playerName = temp;
  cout << "Hello " << playerName << endl;
}
