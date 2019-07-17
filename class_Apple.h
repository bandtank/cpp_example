#pragma once
#include "class_Fruit.h"

class Apple : public Fruit {
  public:
    void setSeedNum(int num);
    int getSeedNum();

  protected:
    int seedNum;
};