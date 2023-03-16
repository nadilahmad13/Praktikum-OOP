#include "Hero.hpp"

#include <iostream>

Hero::Hero(std::string name) {
  this->name = name;
  this->health = 100;
  this->power = 10;
}
int Hero::getHealth() {
  return this->health;
}

void Hero::setHealth(int health) {
  this->health = health;
}

int Hero::getPower() {
  return this->power;
}

void Hero::setPower(int power) {
  this->power = power;
}
