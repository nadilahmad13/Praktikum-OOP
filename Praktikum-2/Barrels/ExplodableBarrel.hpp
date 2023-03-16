#ifndef EXPLODABLE_BARREL_HPP
#define EXPLODABLE_BARREL_HPP

#include <iostream>
using namespace std;

#include "Damageable.hpp"
#include "Explodable.hpp"

class ExplodableBarrel : protected Damageable, protected Explodable {
private:
  int radius;  // integer positif

public:
  // Default Constructor
  // health dari ExplodableBarrel selalu 1 dan
  // default radiusnya adalah 5
  ExplodableBarrel();

  // Masukan: radius (integer positif) dan baseDamage (integer positif)
  // health dari ExplodableBarrel selalu 1
  ExplodableBarrel(int, int);

  // Masukan: damage (integer positif) dan element (string)
  //
  // Berikut adalah urutan aksi yang dilakukan:
  //
  // Apabila barrel telah hancur, maka tidak akan terjadi
  // apa-apa.
  //
  // Barrel menerima damage dan tidak menghiraukan element.
  // Apabila barrel hancur setelah menerima damage, maka
  // barrel akan meledak sebesar radius yang telah ditentukan.
  void takeDamage(int, string);
};

#endif