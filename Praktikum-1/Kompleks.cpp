/*
AHMAD NADIL
13521024
*/
#include <iostream>
#include "Kompleks.h"
using namespace std;

int Kompleks::n_kompleks = 0;

// ctor tanpa parameter
// inisialisasi seluruh koefisien dengan nilai 0
Kompleks::Kompleks(){
	real = 0;
	imaginer = 0;
	n_kompleks++;
}

// ctor dengan parameter
Kompleks::Kompleks(int real, int imaginer){
	this->real = real;
	this->imaginer = imaginer;
	n_kompleks++;
}

//mengembalikan bagian riil
int Kompleks::GetReal() const{
	return real;
}

// mengembalikan bagian imaginer
int Kompleks::GetImaginer() const{
	return imaginer;
}

// mengisi bagian riil
void Kompleks::SetReal(int a){
	real = a;
}

// mengisi bagian imaginer
void Kompleks::SetImaginer(int a){
	imaginer = a;
}

// operator overloading


// operator+ untuk melakukan penjumlahan dengan rumus berikut
// (a + bi) + (c + di) = (a+c) + (b+d)i
Kompleks operator+(const Kompleks&A, const Kompleks&B){
	return Kompleks((A.real+B.real),(A.imaginer+B.imaginer));
}

// operator- untuk melakukan pengurangan dengan rumus berikut
// (a + bi) − (c + di) = (a−c) + (b−d)i
Kompleks operator-(const Kompleks&A, const Kompleks&B){
	return Kompleks((A.real-B.real),(A.imaginer-B.imaginer));
}

// operator* untuk melakukan perkalian dengan rumus berikut
// (a + bi)(c + di) = ac + bci + adi + bd i^2 = (ac−bd) + (bc+ad)i
Kompleks operator* (const Kompleks&A, const Kompleks&B){
	return Kompleks((A.real*B.real)-(A.imaginer*B.imaginer),(A.imaginer*B.real)+(A.real*B.imaginer));
}

// operator* untuk mengkalikan bilangan kompleks dengan konstanta
// (a + bi)(c) = (ac) + (bc)i
Kompleks operator* (const Kompleks&A, const int c){
	return Kompleks(A.real*c,A.imaginer*c);
}

// operator* untuk mengkalikan bilangan kompleks dengan konstanta (sifat komutatif)
Kompleks operator* (const int n, const Kompleks& A){
	return A*n;
}

int Kompleks::CountKompleksInstance(){
	return n_kompleks;
}

// mencetak bilangan kompleks ke layar, diakhiri dengan end-of-line 
// contoh:
// 3+5i
// 0+0i
// -5-4i
void Kompleks::Print(){
	cout << real;
	if(imaginer >= 0){
		cout << "+";
	}
	cout << imaginer << "i" << endl;
}