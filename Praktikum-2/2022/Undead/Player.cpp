#include "Player.hpp"

Player::Player(int _health) {
  this->health = _health;
}

void Player::setHealth(int _health) {
  this->health = _health;
}

int Player::getHealth() const {
  return this->health;
}