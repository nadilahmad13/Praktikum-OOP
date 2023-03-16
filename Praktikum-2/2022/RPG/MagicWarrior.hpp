#include <iostream>

#include "Hero.hpp"
#include "Mage.hpp"
#include "Warrior.hpp"

#ifndef __MAGIC_WARRIOR_HPP__
#define __MAGIC_WARRIOR_HPP__

class MagicWarrior : public Hero, public virtual Mage, public virtual Warrior {
public:
  MagicWarrior(std::string name);
  void attack(Hero* h);       // reduce enemy health by power
  void heal(Hero* h);         // heal target by power/2
  void magicAttack(Hero* h);  // deal damage by target_health/2
  void powerUp();             // current power *2
};
#endif