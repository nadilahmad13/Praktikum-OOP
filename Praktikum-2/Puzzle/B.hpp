// B.hpp
#ifndef B_HPP
#define B_HPP

#include <iostream>
#include "A.hpp"
using namespace std;

class B : public A {
  public:
    void setValue(int y) { numB = y; }
    void print() {
      cout << "(" << getValueA() << ", " << numB << ")" << endl;
    }
    
  private:
    int numB;
};

#endif