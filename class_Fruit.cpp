#include "class_Fruit.h"

void Fruit::setColor(std::string hue) {
  color = hue;
}
void Fruit::setSweetness(int sugar) {
  sweetness = sugar;
}

std::string Fruit::getColor() {
  return color;
}
int Fruit::getSweetness() {
  return sweetness;
}