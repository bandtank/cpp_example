#pragma once
#include "Fruit.hpp"

class Apple : public Fruit {
  public:
    void setSeedNum(int num);
    int getSeedNum();

  protected:
    int seedNum;
};
