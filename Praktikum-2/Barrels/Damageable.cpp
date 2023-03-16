#include "Damageable.hpp"

#include <iostream>

using namespace std;

Damageable::Damageable() {
  this->health = 100;
}

Damageable::Damageable(int maxHealth) {
  this->health = maxHealth;
}

void Damageable::takeDamage(int damage) {
  if (damage > this->health) {
    damage = this->health;
  }

  this->health -= damage;

  if (isDestroyed()) {
    cout << "Object Destroyed!" << endl;
  }
}

bool Damageable::isDestroyed() {
  return this->health == 0;
}