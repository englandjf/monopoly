#ifndef TILE_H
#define TILE_H

class tileType
{
 public:
  tileType();
  void setKind(std::string);
  std::string getKind();
 private:
  std::string kind;
};


#endif 
