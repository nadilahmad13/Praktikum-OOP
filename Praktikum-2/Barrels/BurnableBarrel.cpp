/*
NIM     : 13521024
Nama    : Ahmad Nadil
Praktikum 2
*/

#include "BurnableBarrel.hpp"
#include <iostream>
using namespace std;

// Default Constructor
BurnableBarrel::BurnableBarrel() : Damageable(), Burnable(){}

// Masukan: health (integer positif)
BurnableBarrel::BurnableBarrel(int maxHealth) : Damageable(maxHealth), Burnable(){}

// Masukan: damage (integer positif) dan element (string)
//
// Berikut adalah urutan aksi yang dilakukan:
//
// Apabila barrel telah hancur, maka tidak akan terjadi
// apa-apa.
//
// Apabila barrel menerima damage element berupa "fire",
// maka akan mengaktifkan status burned. Apabila barrel
// menerima damage element berupa "water", maka status
// burned akan dinonaktifkan.
//
// Setelah update status burned, Jika barrel dalam kondisi
// burned, maka damagenya akan dikalikan dengan konstanta
// multiplier. Jika tidak, maka damagenya tidak berubah.
void BurnableBarrel::takeDamage(int damage, string element){
  if (!isDestroyed()){
    if (element == "fire"){
      burn();
    }
    else if (element == "water"){
      watered();
    }
    int multiplier = 1;
    if (isBurned()){
      multiplier *= this->multiplier;
    }
    Damageable::takeDamage(damage * multiplier);
  }
}