#pragma once
#include "Fruit.hpp"

class Grape : public Fruit {
  public:
    void setSeed(bool grapeSeed);
    bool getSeed();

  protected:
    bool seed;
};
