#include "Undead.hpp"

#include <algorithm>
using namespace std;

Undead::Undead(int _stamina) {
  this->stamina = _stamina;
}

void Undead::attack(Player& player) {
  if (this->stamina) {
    this->stamina--;
    player.setHealth(max(player.getHealth() - 1, 0));
  }
}