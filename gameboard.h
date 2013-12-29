#ifndef GAMEBOARD_H
#define GAMEBOARD_H


class gameboard
{
 public:
  gameboard(std::string);
 private:
  std::string playerName;
  std::vector<class tileType*>tile;
};


#endif
