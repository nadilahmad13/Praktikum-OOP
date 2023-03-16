#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

class Player {
private:
  int health;

public:
  Player(int _health);
  void setHealth(int _health);
  int getHealth() const;
};

#endif