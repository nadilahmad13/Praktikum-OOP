// Bottle.hpp

#ifndef __BOTTLE_HPP__
#define __BOTTLE_HPP__

const float PI = 3.14;

class Bottle {
private:
  float height;           // tinggi Bottle
  float radius;           // radius alas Bottle
  float waterHeight;      // tinggi isi Bottle
  const int id;           // nomor urutan Bottle
  static int numOfBottle; // banyaknya Bottle yang telah diciptakan

public:
  Bottle();
  /* Ctor default Bottle kosong dengan tinggi = 10.00 dan radius = 10.00 */
  Bottle(float height, float radius);
  /* Ctor Bottle jika diketahui nilai tinggi dan radius, Bottle kosong*/
  Bottle(const Bottle& bottle);
  /* Cctor Bottle. id juga dicopy dan numOfBottle tidak bertambah */
  ~Bottle();
  /* Destruktor Bottle */
    
  int getId() const;
  /* Mengembalikan id Bottle */
  float getWaterVolume() const;
  /* Mengembalikan volume air dalam botol */
  float getBottleVolume() const;
  /* Mengembalikan volume botol */

  void setHeight(float height);
  /*
   * Mengubah tinggi Bottle. Jika tinggi baru kurang dari tinggi air,
   * maka tinggi air = tinggi yang baru.
   */

  void addWater(float waterVolume);
  /*
   * Menambahkan air ke dalam botol. Jika botol tidak muat, biarkan
   * botol penuh.
   */

  void substractWater(float waterVolume);
  /*
   * Mengurangi air dari botol. Jika air yang tersedia kurang, biarkan
   * botol kosong.
   */

  float getWaterHeightIfVolume(float waterVolume) const;
  /*
   * Mengembalikan tinggi air dari botol jika diketahui suatu volume air.
   * Tinggi botol diabaikan, dianggap tidak akan terlalu penuh.
   */

  void pourWaterTo(Bottle& other);
  /*
   * Menuang isi botol ini ke botol lain sampai botol ini kosong.
   * Jika botol lain penuh sebelum semua air pindah, maka penuangan
   * berhenti dan terdapat sisa air di botol ini.
   */
};

#endif