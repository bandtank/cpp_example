#pragma once
#include <string>

class Fruit {
public:
  void setColor(std::string color);
  void setSweetness(int sweetness);

  std::string getColor();
  int getSweetness();

protected:
  std::string color;
  int sweetness;
};