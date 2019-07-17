#pragma once
#include "class_Fruit.h"

class Grape : public Fruit {
  public:
    void setSeed(bool grapeSeed);
    bool getSeed();

  protected:
    bool seed;
};