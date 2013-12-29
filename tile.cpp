#include<iostream>
#include"tile.h"

using namespace std;

tileType::tileType()
{
}

void tileType::setKind(string temp)
{
  kind = temp;
}

string tileType::getKind()
{
  return kind;
}
