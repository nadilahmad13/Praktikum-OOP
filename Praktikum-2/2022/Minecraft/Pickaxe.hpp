#ifndef __PICKAXE_HPP__
#define __PICKAXE_HPP__

#include "Tool.hpp"

class Pickaxe : public Tool {
public:
  // Ctor, Cctor, Dtor, dan operasi assignment
  Pickaxe();
  Pickaxe(const Pickaxe&);
  virtual ~Pickaxe();
  Pickaxe& operator=(const Pickaxe&);

  void enchant();
  void repair();
  void use();
};

#endif