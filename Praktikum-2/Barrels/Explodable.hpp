#ifndef EXPLODABLE_HPP
#define EXPLODABLE_HPP

class Explodable {
private:
  int baseDamage;

protected:
  const int multiplier = 5;

public:
  Explodable();
  Explodable(int);
  void explode(int);
};

#endif
