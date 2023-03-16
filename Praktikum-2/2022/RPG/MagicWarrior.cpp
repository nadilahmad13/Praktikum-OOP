#include "MagicWarrior.hpp"
#include <iostream>
using namespace std;

MagicWarrior::MagicWarrior(string name): Hero(name){}

void MagicWarrior::attack(Hero *h){
    h->setHealth(h->getHealth() - this->getPower());
}

void MagicWarrior::heal(Hero *h){
    h->setHealth(h->getHealth() + (this->getPower()/2));
}

void MagicWarrior::magicAttack(Hero *h){
    h->setHealth(h->getHealth() - (h->getHealth()/2));
}

void MagicWarrior::powerUp(){
    this->setPower(this->getPower() * 2);
}