#include "Tool.hpp"

#include <iostream>

using namespace std;

Tool::Tool() {
  this->numRawIngots = 0;
  this->numSticks = 0;
  cout << "tool crafted! " << numRawIngots << " " << numSticks << endl;
}

Tool::Tool(int numRawIngots, int numSticks) {
  this->numRawIngots = numRawIngots;
  this->numSticks = numSticks;
  cout << "tool crafted! " << numRawIngots << " " << numSticks << endl;
}

Tool::Tool(const Tool& other) {
  this->numRawIngots = other.numRawIngots;
  this->numSticks = other.numSticks;
  cout << "tool copy crafted! " << numRawIngots << " " << numSticks << endl;
}

Tool::~Tool() {
  cout << "tool destroyed! " << numRawIngots << " " << numSticks << endl;
}

Tool& Tool::operator=(const Tool& other) {
  this->numRawIngots = other.numRawIngots;
  this->numSticks = other.numSticks;
  cout << "tool copied! " << numRawIngots << " " << numSticks << endl;

  return *this;
}

void Tool::enchant() {
  cout << "tool enchanted! " << numRawIngots << " " << numSticks << endl;
}

void Tool::repair() {
  cout << "tool repaired! " << numRawIngots << " " << numSticks << endl;
}

void Tool::use() {
  cout << "tool used! " << numRawIngots << " " << numSticks << endl;
}