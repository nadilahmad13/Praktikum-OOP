#include "Zombie.hpp"
#include <iostream>
using namespace std;

Zombie::Zombie(int _stamina) : Undead(_stamina){}

void Zombie::attack(Player& player){
    if (this->stamina > 0){
        this->stamina--;
        if (player.getHealth() <= 0){
            cout << "nom nom nom" << endl;
        }
        if (player.getHealth() - 3 <= 0){
            player.setHealth(0);
        }
        else{
            player.setHealth(player.getHealth() - 3);
        }
    }
    else{
        cout << "oof" << endl;
    }
}