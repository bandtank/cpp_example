#include <iostream>

using namespace std;

class Fruit {
  public:
    void setColor(string color) {
      this->color = color;
    }
    void setSweetness(int sweetness) {
      this->sweetness = sweetness;
    }

    string getColor() {
      return color;
    }
    int getSweetness() {
      return sweetness;
    }

  protected:
    string color;
    int sweetness;
};

class Apple : public Fruit {
  public:
    void setSeedNum(int seedNum) {
      this->seedNum = seedNum;
    }

    int getSeedNum() {
      return seedNum;
    }

  protected:
    int seedNum;
};

class Pear : public Fruit {
  public:
    void setSeedNum(int seedNum) {
      this->seedNum = seedNum;
    }

    int getSeedNum() {
      return seedNum;
    }

  protected:
    int seedNum;
};

class Grape : public Fruit {
  public:
    void setSeed(bool seed) {
      this->seed = seed;
    }

    bool getSeed() {
      return seed;
    }

  protected:
    bool seed;
};


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

  cout << "This apple is " << apple.getColor() << " and has " << apple.getSeedNum() << " seeds.\n";
  cout << "This pear is " << pear.getColor() << " and has " << pear.getSeedNum() << " seeds.\n";

  if (grape.getSeed()) {
    cout << "This grape is " << grape.getColor() << " and has a seed.\n";
  } else {
    cout << "This grape is " << grape.getColor() << " and is seedless.\n";
  }
}
