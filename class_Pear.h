#pragma once
#include "class_Fruit.h"

class Pear : public Fruit {
public:
  void setSeedNum(int seedNum);
  int getSeedNum();

protected:
  int seedNum;
};