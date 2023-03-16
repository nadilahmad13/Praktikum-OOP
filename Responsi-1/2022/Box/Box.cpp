#include "Box.hpp"
#include <iostream>
using namespace std;

Box::Box() {
  id = 0;
  cout << "new empty box with default id " << id << endl;
}

Box::Box(int id) {
  this->id = id;
  cout << "new empty box " << id << endl;
}

Box::Box(const Box& box) {
  this->id = box.id;
  cout << "copy box " << box.id << endl;
}

Box& Box::operator=(const Box& box) {
  cout << "assign box " << this->id << " <- " << box.id << endl;
  this->id = box.id;
  return *this;
}

Box::~Box() {
  cout << "destroy box " << id << endl;
}

void Box::peek() {
  cout << "box " << id << endl;
}