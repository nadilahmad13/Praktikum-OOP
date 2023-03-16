#include "Pickaxe.hpp"

#include <iostream>

using namespace std;

Pickaxe::Pickaxe() : Tool(3, 2) {
  cout << "pickaxe crafted! " << numRawIngots << " " << numSticks << endl;
}

Pickaxe::Pickaxe(const Pickaxe& other) : Tool::Tool(other) {
  this->numRawIngots = other.numRawIngots;
  this->numSticks = other.numSticks;
  cout << "pickaxe copy crafted! " << numRawIngots << " " << numSticks << endl;
}

Pickaxe::~Pickaxe() {
  cout << "pickaxe destroyed! " << numRawIngots << " " << numSticks << endl;
}

Pickaxe& Pickaxe::operator=(const Pickaxe& other) {
  this->numRawIngots = other.numRawIngots;
  this->numSticks = other.numSticks;
  cout << "pickaxe copied! " << numRawIngots << " " << numSticks << endl;

  return *this;
}

void Pickaxe::enchant() {
  cout << "pickaxe enchanted!" << endl;
}

void Pickaxe::repair() {
  cout << "pickaxe repaired!" << endl;
}

void Pickaxe::use() {
  cout << "swing! swing! diamonds found!" << endl;
}