// BunchOfKeys.hpp
#ifndef __BUNCH_OF_KEYS_HPP__
#define __BUNCH_OF_KEYS_HPP__

#include <iostream>
using namespace std;

class BunchOfKeys {
  public:
    // ctor
    BunchOfKeys();
    
    // member function
    void add();
    void shake();
    
  private:
    int n_keys; // jumlah kunci yg ada
};

#endif 