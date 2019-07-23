#pragma once
#include "Fruit.hpp"

class Pear : public Fruit {
public:
  void setSeedNum(int num);
  int getSeedNum();

protected:
  int seedNum;
};
