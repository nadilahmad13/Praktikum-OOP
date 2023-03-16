/*
Nama : Ahmad Nadil
NIM  : 13521024
Praktikum Responsi 2
*/

#include "Rekening.h"
#include <iostream>
using namespace std;

// Konstruktor untuk menginisialisasi saldo
// Set saldo 0.0 apabila saldo bernilai negatif
Rekening::Rekening(double saldo){
    if(saldo < 0.0){
        this->saldo = 0.0;
    }else{
        this->saldo = saldo;
    }
} 

// Getter, Setter
void Rekening::setSaldo(double saldo){
    this->saldo = saldo;
}

double Rekening::getSaldo() const{
    return saldo;
}

// Member Function
// Tambahkan sejumlah nominal uang ke saldo
void Rekening::simpanUang(double newSaldo){
    saldo += newSaldo;
}

// Kurangkan sejumlah nominal uang dari saldo apabila saldo mencukupi (tidak negatif setelah dikurangkan)
// Kembalikan boolean yang mengindikasikan apakah uang berhasil ditarik atau tidak
bool Rekening::tarikUang(double tarik){
    if(saldo - tarik < 0.0){
        return false;
    }else{
        saldo -= tarik;
        return true;
    }
}