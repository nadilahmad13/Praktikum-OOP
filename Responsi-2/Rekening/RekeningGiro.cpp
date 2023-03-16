/*
Nama : Ahmad Nadil
NIM  : 13521024
Praktikum Responsi 2
*/

#include "RekeningGiro.h"
#include <iostream>
using namespace std;

// Konstruktor menginisialisi saldo (parameter 1) dan suku bunga (parameter 2)
// Set suku bunga 0.0 apabila suku bunga bernilai negatif
RekeningGiro::RekeningGiro(double saldo, double bunga) : Rekening(saldo){
    sukuBunga = bunga;
}

// Getter, Setter
void RekeningGiro::setSukuBunga(double newBunga){
    sukuBunga = newBunga;
}

double RekeningGiro::getSukuBunga() const{
    return sukuBunga;
}

// Member Function
// Bunga dihitung dari saldo dikali suku bunga
double RekeningGiro::hitungBunga(){
    return getSaldo() * sukuBunga;
}