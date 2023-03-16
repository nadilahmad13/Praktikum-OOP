#include "Card.hpp"
#include <iostream>
using namespace std;

int main(){
    Card* card1 = new Card(1);
    Card* card0 = new Card();
    Card* card2 = new Card(2);
    *card0 = *card1;
    card1->gesek();
    Card* cardcopy = new Card(*card2);
    cardcopy->gesek();
    card1->~Card();
    card2->~Card();
    cardcopy->~Card();
    card0->~Card();
    return 0;
}
// new empty card 1
// new empty card with default number 0
// new empty card 2
// assign card 0 <- 1
// chaching 1
// copy card 2
// chaching 2
// destroy card 1
// destroy card 2
// destroy card 2
// destroy card 1