#include<iostream>
#include<vector>
#include"gameboard.h"

using namespace std;

string getName();



int main()
{
  gameboard mainGame(getName());
}

string getName()
{
  cout << "Player name: ";
  string temp;
  cin >> temp;
  return temp;
}
