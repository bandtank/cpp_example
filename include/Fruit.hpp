#pragma once
#include <string>

class Fruit {
public:
  void setColor(std::string hue);
  void setSweetness(int sugar);

  std::string getColor();
  int getSweetness();

protected:
  std::string color;
  int sweetness;
};