#ifndef DAMAGEABLE_HPP
#define DAMAGEABLE_HPP

class Damageable {
private:
  int health;

public:
  Damageable();
  Damageable(int);
  void takeDamage(int);
  bool isDestroyed();
};

#endif
