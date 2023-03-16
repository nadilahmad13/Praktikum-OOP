/* 
 * NIM          : 13521024
 * Nama         : Ahmad Nadil
 * Ujian Praktikum
 * File         : Pecahan.cpp
*/

#include <iostream>
#include "Pecahan.hpp"
using namespace std;

// ctor: set n = 0 dan d = 1
pecahan::pecahan() : n(0),d(1){}

// ctor: set n = _n dan d = _d
pecahan::pecahan(int _n, int _d) : n(_n), d(_d){}

// cctor
pecahan::pecahan(const pecahan &P) : n(P.n), d(P.d){}


pecahan::~pecahan(){} // dtor

int pecahan::getPemb() // Menghasillkan pembilang n
{
    return n;
}
int pecahan::getPeny() // Menghasilkan penyebut d
{
    return d;
}

void pecahan::setPemb(int _n) // Mengubah nilai n menjadi _n
{
    this-> n = _n;
}
void pecahan::setPeny(int _d) // Mengubah nilai d menjadi _d
{
    this->d = _d;
}

pecahan pecahan::operator+(const pecahan &P)
// Menambahkan pecahan dengan P
// Rumus = n1/d1 + n2/d2 = (n1*d2 + n2*d1)/d1*d2
{
    // return Kompleks((A.real+B.real),(A.imaginer+B.imaginer));
    return pecahan((this->n*P.d + P.n*this->d),(this->d*P.d));
}

pecahan pecahan::operator-(const pecahan &P)
// Menambahkan pecahan dengan P
// Rumus = n1/d1 - n2/d2 = (n1*d2 - n2*d1)/d1*d2
{
    return pecahan((this->n*P.d - P.n*this->d),(this->d*P.d));
}

pecahan pecahan::operator*(int x)
// Mengalikan pembilang P dengan x dan penyebut P dengan x
// Syarat: x > 0
// Rumus = n1/d1 = (n1*x)/(d1*x)
{
    if (x > 0){
        return pecahan((this->n * x),(this->d * x));
    }else{
        return *this;
    }
}

bool pecahan::operator==(const pecahan &P)
// Mengecek apakah kedua pecahan memiliki nilai yang sama
// Hint: bandingkan dengan gcd, tidak boleh dibandingkan dengan RealP()!
{
    float a = (float)n/(float)d;
    float b = (float)P.n/(float)P.d;
    return a == b;
}

float pecahan::RealP()
// Menghasilkan bentuk desimal dari pecahan
{
    return (float)n/(float)d;
}

void pecahan::Print()
// Mencetak pecahan dalam format: n/d (tanpa tambahan karakter apa pun
// di depan, tengah, atau belakang)
{
    cout << n << "/" << d;
}