#include<iostream>
#include<vector>
#include"gameboard.h"

using namespace std;

string getName();



int main()
{
  getName();
  
}

string getName()
{
  cout << "Player name: ";
  string temp;
  cin >> temp;
  return temp;
}
