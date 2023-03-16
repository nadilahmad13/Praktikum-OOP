#include "SpacingGuildShip.hpp"
#include <iostream>
using namespace std;

float SpacingGuildShip::totalGuildTravel = 0;
int SpacingGuildShip::producedShips = 0;

SpacingGuildShip::SpacingGuildShip()
/* Ctor default: jumlah penumpang adalah 0, jumlah Guild Navigator adalah 3,
    * Kapasitas pesawat adalah 50 orang, dan stok spice 50*/
: guildNavigatorCount(3), 
maxPassengerCap(50), 
serialNum(producedShips+1)

{
    this->passengerCount = 0;
    this->spiceStock = 50;
    this->operatingGuildNavigator = 3;
    this->producedShips++;
}

SpacingGuildShip::SpacingGuildShip(int maxPassengerCap, int guildNavigatorCount, int spiceStock)
/* Ctor jika diketahui jumlah Guild Navigator, kapasitas maksimal pesawat, 
    * dan stok spice. Jumlah penumpang 0 */
: guildNavigatorCount(guildNavigatorCount), 
maxPassengerCap(maxPassengerCap), 
serialNum(producedShips+1)

{
    this->passengerCount = 0;
    this->spiceStock = spiceStock;
    this->operatingGuildNavigator = guildNavigatorCount;
    this->producedShips++;
}

SpacingGuildShip::SpacingGuildShip(const SpacingGuildShip& sgs)
/* Cctor SpacingGuildShip */
: guildNavigatorCount(sgs.guildNavigatorCount),
maxPassengerCap(sgs.maxPassengerCap),
serialNum(sgs.producedShips + 1)

{
    this->passengerCount = sgs.passengerCount;
    this->spiceStock = sgs.spiceStock;
    this->operatingGuildNavigator = sgs.operatingGuildNavigator;
    this->producedShips++;
}

SpacingGuildShip::~SpacingGuildShip()
/* Dtor SpacingGuildShip */
{
    // this->producedShips--;
}

int SpacingGuildShip::getShipSerialNum() const
/* Mengembalikan serial number dari pesawat */
{
    return this->serialNum;
}

int SpacingGuildShip::getPassengerCount() const
/* Mengembalikan jumlah penumpang pesawat */
{
    return this->passengerCount;
}


void SpacingGuildShip::travel(float distance)
/* Pesawat bergerak sebesar distance, sehingga 
    * totalGuildTravel bertambah sebesar:
    *
    * distance / (E^2 * operatingGuildNavigator).
    * 
    * Catatan: 
    * 1. Apabila tidak ada Guild Navigator yang operasional, 
    *    maka totalGuildTravel tidak bertambah;
    * 2. Apabila ada Guild Navigator yang operasional, 
    *    maka jumlah Guild Navigator operasional berkurang 1 */
{
    if (this->operatingGuildNavigator > 0){
        this->totalGuildTravel += distance / E * E * this->operatingGuildNavigator;
        this->operatingGuildNavigator--;
    }
}

void SpacingGuildShip::boarding(int addedPassengers)
/* Penumpang naik ke pesawat sebesar addedPassenger. 
    * Jika pesawat tidak muat, penumpang pesawat menjadi penuh */
{
    if (this->passengerCount + addedPassengers > this->maxPassengerCap){
        this->passengerCount = this->maxPassengerCap;
    }
    else{
        this->passengerCount += addedPassengers;
    }
}

void SpacingGuildShip::dropOff(int droppedPassengers)
/* Penumpang turun dari pesawat sebesar droppedPassenger. 
    * Jika jumlah penumpang kurang, kosongkan pesawat */
{
    if (this->passengerCount - droppedPassengers < 0){
        this->passengerCount = 0;
    }
    else{
        this->passengerCount -= droppedPassengers;
    }
}

void SpacingGuildShip::refreshNavigator(int n)
    /* Menambah n Guild Navigator operasional yang menghabiskan
    * n * GUILD_NAVIGATOR_SPICE_DOSE spice dari stok.
    * 
    * Catatan:
    * 1. Maksimum merefresh seluruh Guild Navigator yang ada di pesawat 
    * 2. Apabila stok kurang, maka merefresh n maksimum yang dapat di refresh
    *    dari stok spice yang ada */
{
    int addedOps = n;
    while (this->spiceStock - addedOps * GUILD_NAVIGATOR_SPICE_DOSE < 0)
    {
        addedOps--;
    }
    this->operatingGuildNavigator += addedOps;
    this->spiceStock -= addedOps * GUILD_NAVIGATOR_SPICE_DOSE;
}

void SpacingGuildShip::transitToArrakis(int addedSpice)
/* Menambah stok spice sebesar addedSpice */
{
    this->spiceStock += addedSpice;
}