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
  for(int i = 0; i < 40;i++)
    {
      tile.push_back(new tileType);
    }
  //Set each tile kind
  //First row
  tile[0]->setKind("go");
  tile[1]->setKind("a1");
  tile[2]->setKind("cc1");
  tile[3]->setKind("a2");
  tile[4]->setKind("it");
  tile[5]->setKind("rr1");
  tile[6]->setKind("b1");
  tile[7]->setKind("c1");
  tile[8]->setKind("b2");
  tile[9]->setKind("b3");
  //Second row
  tile[10]->setKind("j");
  tile[11]->setKind("c1");
  tile[12]->setKind("u1");
  tile[13]->setKind("c2");
  tile[14]->setKind("c3");
  tile[15]->setKind("rr2");
  tile[16]->setKind("d1");
  tile[17]->setKind("cc2");
  tile[18]->setKind("d2");
  tile[19]->setKind("d3");
  //Third row
  tile[20]->setKind("p");
  tile[21]->setKind("e1");
  tile[22]->setKind("c2");
  tile[23]->setKind("e2");
  tile[24]->setKind("e3");
  tile[25]->setKind("rr3");
  tile[26]->setKind("f1");
  tile[27]->setKind("f2");
  tile[28]->setKind("u2");
  tile[29]->setKind("f3");
  //Fourth row
  tile[30]->setKind("JAIL");
  tile[31]->setKind("g1");
  tile[32]->setKind("g2");
  tile[33]->setKind("cc3");
  tile[34]->setKind("g3");
  tile[35]->setKind("rr4");
  tile[36]->setKind("c3");
  tile[37]->setKind("h1");
  tile[38]->setKind("lt");
  tile[39]->setKind("h2");
}
