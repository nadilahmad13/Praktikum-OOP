#include "Burnable.hpp"

#include <iostream>

using namespace std;

Burnable::Burnable() {
  this->burned = false;
}

void Burnable::burn() {
  this->burned = true;
}

void Burnable::watered() {
  this->burned = false;
}

bool Burnable::isBurned() {
  return this->burned;
}