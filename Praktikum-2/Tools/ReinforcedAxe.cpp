#include "ReinforcedAxe.hpp"

#include <iostream>

using namespace std;

ReinforcedAxe::ReinforcedAxe() : Tool(3, 4) {
  cout << "reinforced axe crafted! " << numRawIngots << " " << numSticks
       << endl;
}

ReinforcedAxe::ReinforcedAxe(int addedIngots, int sticks)
    : Tool(3 + addedIngots, 4 + sticks) {
  cout << "reinforced axe crafted! " << numRawIngots << " " << this->numSticks
       << endl;
}

ReinforcedAxe::ReinforcedAxe(const ReinforcedAxe& other)
    : Tool(other.numRawIngots, other.numSticks) {
  cout << "reinforced axe copy crafted! " << numRawIngots << " " << numSticks
       << endl;
}

ReinforcedAxe::~ReinforcedAxe() {
  cout << "reinforced axe destroyed! " << numRawIngots << " " << numSticks
       << endl;
}

ReinforcedAxe& ReinforcedAxe::operator+(const ReinforcedAxe& other) {
  ReinforcedAxe* a = new ReinforcedAxe(*this);

  a->numRawIngots = this->numRawIngots + other.numRawIngots;
  a->numSticks = this->numSticks + other.numSticks;
  cout << "reinforcing axe! " << a->numRawIngots << " " << a->numSticks << endl;

  return *a;
}

void ReinforcedAxe::enchant() {
  cout << "reinforced axe's grip enchanted! " << numRawIngots << " "
       << numSticks << endl;
}

void ReinforcedAxe::repair() {
  cout << "reinforced axe is repaired! " << numRawIngots << " " << numSticks
       << endl;
}

void ReinforcedAxe::use() {
  cout << "chip chop chip chop! " << numRawIngots << " " << numSticks << endl;
}