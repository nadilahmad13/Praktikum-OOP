#ifndef __UNDEAD_HPP__
#define __UNDEAD_HPP__

#include "Player.hpp"

class Undead {
protected:
  int stamina;

public:
  Undead(int _stamina);
  void attack(Player& player);
};

#endif
