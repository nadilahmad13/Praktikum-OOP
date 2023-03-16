#include <iostream>

using namespace std;

#ifndef __HERO_HPP__
#define __HERO_HPP__

class Hero {
protected:
  string name;
  int health;  // default 100, can be overhealed
  int power;   // default 10
public:
  Hero(string name);
  int getHealth();
  void setHealth(int health);
  int getPower();
  void setPower(int power);
};

#endif