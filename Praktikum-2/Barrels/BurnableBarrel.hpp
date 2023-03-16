#ifndef BURNABLE_BARREL_HPP
#define BURNABLE_BARREL_HPP

#include <iostream>
using namespace std;

#include "Burnable.hpp"
#include "Damageable.hpp"

class BurnableBarrel : protected Damageable, protected Burnable {
public:
  // Default Constructor
  BurnableBarrel();

  // Masukan: health (integer positif)
  BurnableBarrel(int);

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
  void takeDamage(int, string);
};

#endif