#include "Explodable.hpp"

#include <iostream>

using namespace std;

Explodable::Explodable() {
  this->baseDamage = 1000;
}

Explodable::Explodable(int baseDamage) {
  this->baseDamage = baseDamage;
}

void Explodable::explode(int radius) {
  cout << "Exploding " << baseDamage * multiplier << " damage with " << radius
       << " unit radius!" << endl;
}