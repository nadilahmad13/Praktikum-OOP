/*
NIM     : 13521024
Nama    : Ahmad Nadil
Praktikum 2
*/

// main.cpp
#include "A.hpp"
#include "B.hpp"

void setA(A* var){
  var->setValue(888);
}

int main() {
  B b; /** ANDA HARUS MENGGUNAKAN DEFAULT CONSTRUCTOR */
  
  // Your code goes here :)
  setA(&b);
  b.setValue(10888);
  b.print(); // OUTPUT: (888, 10888)
  return 0;
}