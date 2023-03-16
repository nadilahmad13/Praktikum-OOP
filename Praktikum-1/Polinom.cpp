/*
AHMAD NADIL
13521024
*/
#include "Polinom.hpp"
#include <iostream>
#include <cmath>
using namespace std;

// ctor, cctor, dtor, op=
// untuk konstruktor, inisialisasi seluruh nilai koefisien dengan 0.

// ctor Polinom dengan orde = 0
Polinom::Polinom(){
    derajat = 0;
    koef = new int[derajat+1];
    for (int i = 0; i <= derajat; i++){
        koef[i] = 0;
    }
}

// ctor Polinom dengan orde = n (sesuai parameter)
Polinom::Polinom(int n){
    derajat = n;
    koef = new int[derajat+1];
    for (int i = 0; i <= derajat; i++){
        koef[i] = 0;
    }
}

Polinom::Polinom(const Polinom& pol){
    derajat = pol.derajat;
    koef = new int[derajat+1];
    for (int i = 0; i <= derajat; i++){
        koef[i] = pol.koef[i];
    }
}

Polinom::~Polinom(){
    delete[] koef;
    derajat = 0;
}

Polinom& Polinom::operator=(const Polinom& pol){
    derajat = pol.derajat;
    koef = new int[derajat+1];
    for (int i = 0; i <= derajat; i++){
        koef[i] = pol.koef[i];
    }
    return *this;
}

// getter, setter
int Polinom::getKoefAt(int idx) const{
    return koef[idx];
}

int Polinom::getDerajat() const{
    return derajat;
}

void Polinom::setKoefAt(int idx, int val){
    koef[idx] = val;
}

void Polinom::setDerajat(int n){
    derajat = n;
}

// member function
// Melakukan pembacaan koefisien sejumlah derajat Polinom, dimulai dari x^0 (konstanta)
void Polinom::input(){
    for (int i = 0; i <= derajat; i++){
        cin >> koef[i];
    }
}

// Mencetak seluruh koefisien polinom. Untuk setiap koefisien akhiri dengan end-of-line
// Cetaklah apa adanya dari koefisien ke-0 hingga derajat tertinggi (termasuk apabila koefisien = 0)
void Polinom::printKoef(){
    for (int i = 0; i <= derajat; i++){
        cout << koef[i] << endl;
    }
}

// Menghitung hasil substitusi x dengan sebuah bilangan ke dalam polinom
int Polinom::substitute(int x){
    int hasil = koef[0];
    for (int i = 1; i <= derajat; i++){
        hasil += koef[i] * pow(x, i);
    }
    return hasil;
}

// Mencetak polinom dengan format: A+Bx^1+Cx^2+Dx^3...dst (diakhiri dengan end-of-line)
// Apabila suatu koefisien bernilai < 0, gunakan tanda "-" untuk menggantikan tanda "+"
// Apabila suatu koefisien bernilai 0, lewati koefisien tersebut dan lanjutkan ke koefisien selanjutnya
// Jika seluruh koefisien bernilai 0, keluarkan "0"
void Polinom::print(){
    if (derajat == 0){
        cout << koef[0] << endl;
    } else {
        for (int i = 0; i <= derajat; i++){
            if (koef[i] != 0){
                if (i == 0){
                    cout << koef[i];
                } else {
                    if (koef[i] > 0){
                        cout << "+" << koef[i] << "x^" << i;
                    } else {
                        cout << koef[i] << "x^" << i;
                    }
                }
            }
        }
        cout << endl;
    }
}