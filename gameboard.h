#ifndef GAMEBOARD_H
#define GAMEBOARD_H


class gameboard
{
 public:
  gameboard(std::string);
  void gameControl();
  void playerMove(int);
 private:
  std::string playerName;
  int playerLocation;
  std::vector<class tileType*>tile;
};


#endif
