// Weed.hpp

#ifndef __WEED__HPP__
#define __WEED__HPP__

#include <iostream>

class Weed {
   private:
    int many;  // jumlah kawanan semak, 1 <= many <= 1000

   public:
    Weed();       // Membuat Weed dengan jumlah kawanan 1
    Weed(int n);  // Membuat Weed dengan jumlah kawanan n
    Weed(const Weed &b);
    ~Weed();

    void step();  // Menghasilkan bunyi "kresek..." berulang
                  // sebanyak n kawanan
};

#endif