#ifndef BURNABLE_HPP
#define BURNABLE_HPP

class Burnable {
private:
  bool burned;

protected:
  const int multiplier = 2;

public:
  Burnable();
  void burn();
  void watered();
  bool isBurned();
};

#endif