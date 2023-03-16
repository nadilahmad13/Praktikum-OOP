#ifndef __MAGE_HPP__
#define __MAGE_HPP__

#include "Hero.hpp"

class Mage {
public:
  virtual void heal(Hero* h) = 0;
  virtual void magicAttack(Hero* h) = 0;
};

#endif