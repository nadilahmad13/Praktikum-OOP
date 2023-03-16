#ifndef _SKELETON_HPP__
#define _SKELETON_HPP__

#include "Player.hpp"
#include "Undead.hpp"

class Skeleton : public Undead {
private:
  int arrow;

public:
  Skeleton(int _stamina, int _arrow);
  void attack(Player& player);
};

#endif
