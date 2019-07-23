#include <iostream>

#include "Fruit.hpp"
#include "Apple.hpp"
#include "Pear.hpp"
#include "Grape.hpp"

int main() {
  Apple apple;
  apple.setColor("red");
  apple.setSweetness(7);
  apple.setSeedNum(4);

  Pear pear;
  pear.setColor("yellow");
  pear.setSweetness(8);
  pear.setSeedNum(2);

  Grape grape;
  grape.setColor("purple");
  grape.setSweetness(5);
  grape.setSeed(false);

  std::cout << "This apple is " << apple.getColor() << " and has " << apple.getSeedNum() << " seeds.\n";
  std::cout << "This pear is " << pear.getColor() << " and has " << pear.getSeedNum() << " seeds.\n";

  if (grape.getSeed()) {
    std::cout << "This grape is " << grape.getColor() << " and has a seed.\n";
  }
  else {
    std::cout << "This grape is " << grape.getColor() << " and is seedless.\n";
  }
}
