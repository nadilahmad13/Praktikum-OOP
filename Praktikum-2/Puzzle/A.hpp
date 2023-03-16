// A.hpp
#ifndef A_HPP
#define A_HPP

class A {
  public:
    int getValueA() { return numA; }
    void setValue(int x) { numA = x; }
    
  private:
    int numA;
};

#endif