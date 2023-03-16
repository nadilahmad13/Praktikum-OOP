/*
NIM     : 13521024
Nama    : Ahmad Nadil
Praktikum 2
*/
#include "Pickaxe.hpp"
#include "ReinforcedAxe.hpp"
#include "Tool.hpp"
#include <iostream>
using namespace std;

int main(){
    Pickaxe *P1 = new Pickaxe();
    P1->use();
    P1->enchant();
    Pickaxe *P2 = new Pickaxe(*P1);
    Pickaxe *P3 = new Pickaxe();
    *P3 = *P3;

    ReinforcedAxe *R1 = new ReinforcedAxe();
    R1->use();
    ReinforcedAxe *R2 = new ReinforcedAxe(*R1);
    R2->enchant();
    ReinforcedAxe *R3 = new ReinforcedAxe(*R2 + *R1);
    R3->repair();

    delete R1;
    delete R2;
    delete R3;
    delete P1;
    delete P2;
    
    return 0;
}

// tool crafted! 3 2
// pickaxe crafted! 3 2
// swing! swing! diamonds found!
// pickaxe enchanted!
// tool copy crafted! 3 2
// pickaxe copy crafted! 3 2
// tool crafted! 3 2
// pickaxe crafted! 3 2
// pickaxe copied! 3 2
// tool crafted! 3 4
// reinforced axe crafted! 3 4
// chip chop chip chop! 3 4
// tool crafted! 3 4
// reinforced axe copy crafted! 3 4
// reinforced axe's grip enchanted! 3 4
// tool crafted! 3 4
// reinforced axe copy crafted! 3 4
// reinforcing axe! 6 8
// tool crafted! 6 8
// reinforced axe copy crafted! 6 8
// reinforced axe is repaired! 6 8
// reinforced axe destroyed! 3 4
// tool destroyed! 3 4
// reinforced axe destroyed! 3 4
// tool destroyed! 3 4
// reinforced axe destroyed! 6 8
// tool destroyed! 6 8
// pickaxe destroyed! 3 2
// tool destroyed! 3 2
// pickaxe destroyed! 3 2
// tool destroyed! 3 2