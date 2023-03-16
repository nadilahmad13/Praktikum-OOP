#include <iostream>
#include "Bottle.hpp"
using namespace std;

int Bottle::numOfBottle = 0;

Bottle::Bottle() : id(numOfBottle + 1)
/* Ctor default Bottle kosong dengan tinggi = 10.00 dan radius = 10.00 */
{
    this->height = 10;
    this->radius = 10.00;
    this->waterHeight = 0;
    numOfBottle++;  
}

Bottle::Bottle(float height, float radius) : id(numOfBottle + 1)
/* Ctor Bottle jika diketahui nilai tinggi dan radius, Bottle kosong*/
{
    this->height = height;
    this->radius = radius;
    this->waterHeight = 0;
    numOfBottle++;
}

Bottle::Bottle(const Bottle& bottle) : id(bottle.id)
/* Cctor Bottle. id juga dicopy dan numOfBottle tidak bertambah */
{
    this->height = bottle.height;
    this->radius = bottle.radius;
    this->waterHeight = bottle.waterHeight;
}

Bottle::~Bottle()
/* Destruktor Bottle */
{
}

int Bottle::getId() const
/* Mengembalikan id Bottle */
{
    return this->id;
}

float Bottle::getWaterVolume() const
/* Mengembalikan volume air dalam botol */
{
    return PI * this->radius * this->radius * this->waterHeight;
}

float Bottle::getBottleVolume() const
/* Mengembalikan volume botol */
{
    return PI * this->radius * this->radius * this->height;
}

void Bottle::setHeight(float height)
/*
* Mengubah tinggi Bottle. Jika tinggi baru kurang dari tinggi air,
* maka tinggi air = tinggi yang baru.
*/
{
    this->height = height;
    if (height < this->waterHeight){
        this->waterHeight = height;
    }
}

void Bottle::addWater(float waterVolume)
/*
* Menambahkan air ke dalam botol. Jika botol tidak muat, biarkan
* botol penuh.
*/
{
    float newWaterHeight = this->waterHeight + getWaterHeightIfVolume(waterVolume);
    if (newWaterHeight > this->height){
        this->waterHeight = this->height;
    }
    else{
        this->waterHeight = newWaterHeight;
    }
}   

void Bottle::substractWater(float waterVolume)
/*
* Mengurangi air dari botol. Jika air yang tersedia kurang, biarkan
* botol kosong.
*/
{
    float substractedWaterHeight = waterVolume / (PI * this->radius * this->radius);
    float newWaterHeight = this->waterHeight - getWaterHeightIfVolume(waterVolume);
    if (newWaterHeight < 0){
        this->waterHeight = 0;
    }
    else{
        this->waterHeight = newWaterHeight;
    }
}

float Bottle::getWaterHeightIfVolume(float waterVolume) const
/*
* Mengembalikan tinggi air dari botol jika diketahui suatu volume air.
* Tinggi botol diabaikan, dianggap tidak akan terlalu penuh.
*/
{
    return waterVolume / (PI * this->radius * this->radius);
}

void Bottle::pourWaterTo(Bottle& other)
/*
* Menuang isi botol ini ke botol lain sampai botol ini kosong.
* Jika botol lain penuh sebelum semua air pindah, maka penuangan
* berhenti dan terdapat sisa air di botol ini.
*/
{
    float max = other.getBottleVolume() - other.getWaterVolume();
    if (getBottleVolume() > max){
        other.addWater(max);
        this->waterHeight -= getWaterHeightIfVolume(max);
    }
    else{
        other.addWater(getWaterVolume());
        this->waterHeight = 0;
    }
}