#include "class_Fruit.h"

void Fruit::setColor(std::string color) {
  this->color = color;
}
void Fruit::setSweetness(int sweetness) {
  this->sweetness = sweetness;
}

std::string Fruit::getColor() {
  return color;
}
int Fruit::getSweetness() {
  return sweetness;
}