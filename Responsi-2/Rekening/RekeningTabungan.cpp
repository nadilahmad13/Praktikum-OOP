/*
Nama : Ahmad Nadil
NIM  : 13521024
Praktikum Responsi 2
*/

#include<iostream>
#include "RekeningTabungan.h"
using namespace std;

// Konstruktor menginisialisi saldo (parameter 1) dan biaya transaksi (parameter 2)
// Set biaya transaksi 0.0 apabila biaya transaksi bernilai negatif
RekeningTabungan::RekeningTabungan(double saldo, double biaya) : Rekening(saldo){
    biayaTransaksi = biaya;
}

// Getter, Setter
void RekeningTabungan::setBiayaTransaksi(double biaya){
    biayaTransaksi = biaya;
} 

double RekeningTabungan::getBiayaTransaksi() const{
    return biayaTransaksi;
}

// Member Function
// Panggil fungsi simpanUang dari parent class
// Kurangkan saldo dengan biaya transaksi
void RekeningTabungan::simpanUang(double uang){
    Rekening::simpanUang(uang);
    setSaldo(getSaldo() - biayaTransaksi);
}

// Panggil fungsi tarikUang dari parent class
// Kurangkan saldo dengan biaya transaksi hanya jika penarikan uang berhasil
// Saldo mungkin saja menjadi negatif apabila setelah penarikan, saldo < biaya transaksi
// Kembalikan boolean yang mengindikasikan apakah uang berhasil ditarik atau tidak
bool RekeningTabungan::tarikUang(double uang){
    if(Rekening::tarikUang(uang)){
        setSaldo(getSaldo() - biayaTransaksi);
        return true;
    }else{
        return false;
    }
}

