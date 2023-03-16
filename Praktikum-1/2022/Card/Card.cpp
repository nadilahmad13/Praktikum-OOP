#include "Card.hpp"
#include <iostream>
using namespace std;

Card::Card() {
  num = 0;
  cout << "new empty card with default number " << num << endl;
}

Card::Card(int num) {
  this->num = num;
  cout << "new empty card " << num << endl;
}

Card::Card(const Card& card) {
  this->num = card.num;
  cout << "copy card " << card.num << endl;
}

Card& Card::operator=(const Card& card) {
  cout << "assign card " << this->num << " <- " << card.num << endl;
  this->num = card.num;
  return *this;
}

Card::~Card() {
  cout << "destroy card " << num << endl;
}

void Card::gesek() {
  cout << "chaching " << num << endl;
}