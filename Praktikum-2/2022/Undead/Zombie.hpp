#ifndef _ZOMBIE_HPP__
#define _ZOMBIE_HPP__

#include "Player.hpp"
#include "Undead.hpp"

class Zombie : public Undead {
public:
  Zombie(int _stamina);
  void attack(Player& player);
};

#endif
