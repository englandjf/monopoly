#include<iostream>
#include<vector>
#include"tile.h"
#include"gameboard.h"
//#include"tile.h"

using namespace std;

gameboard::gameboard(string temp)
{
  playerName = temp;
  cout << "Hello " << playerName << endl;
  //Declare each tile
  for(int i = 0; i < 20;i++)
    {
      tile.push_back(new tileType);
    }
  //Set each tile kind
  string type = "go";
  tile[0]->setKind(type);
}
