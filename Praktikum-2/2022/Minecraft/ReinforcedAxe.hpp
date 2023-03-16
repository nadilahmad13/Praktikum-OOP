#ifndef __REINFORCEDAXE_HPP__
#define __REINFORCEDAXE_HPP__

#include "Tool.hpp"

class ReinforcedAxe : public Tool {
public:
  // Ctor, Cctor, Dtor, dan operasi assignment
  ReinforcedAxe();
  ReinforcedAxe(int addedIngot, int sticks);
  ReinforcedAxe(const ReinforcedAxe&);
  virtual ~ReinforcedAxe();
  ReinforcedAxe& operator+(const ReinforcedAxe&);

  void enchant();
  void repair();
  void use();
};

#endif