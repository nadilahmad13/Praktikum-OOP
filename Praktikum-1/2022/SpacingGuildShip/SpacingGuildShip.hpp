// SpacingGuildShip.hpp

#ifndef __SPACINGGUILDSHIP_HPP__
#define __SPACINGGUILDSHIP_HPP__


const float E = 2.71;
const int GUILD_NAVIGATOR_SPICE_DOSE = 7;

class SpacingGuildShip {
private:
	const int maxPassengerCap;		// Kapasitas maksimal penumpang pesawat
	int passengerCount;				// Jumlah penumpang	
	const int guildNavigatorCount;	// Jumlah Guild Navigator dalam pesawat
	int operatingGuildNavigator;	/* Jumlah Guild Navigator yang operasional
									   (default: semua operasional)	*/
	const int serialNum;			// Nomor produksi pesawat sesuai urutan produksi
	int spiceStock;					// Stok spice pesawat
	static float totalGuildTravel;	// Total jarak yang ditempuh oleh setiap SpacingGuildShip
	static int producedShips;		// Jumlah pesawat yang telah diproduksi

public:
	SpacingGuildShip();
	/* Ctor default: jumlah penumpang adalah 0, jumlah Guild Navigator adalah 3,
	 * Kapasitas pesawat adalah 50 orang, dan stok spice 50*/

	SpacingGuildShip(int maxPassengerCap, int guildNavigatorCount, int spiceStock);
	/* Ctor jika diketahui jumlah Guild Navigator, kapasitas maksimal pesawat, 
	 * dan stok spice. Jumlah penumpang 0 */

	SpacingGuildShip(const SpacingGuildShip&);
	/* Cctor SpacingGuildShip */

	~SpacingGuildShip();
	/* Dtor SpacingGuildShip */
	
	int getShipSerialNum() const;
	/* Mengembalikan serial number dari pesawat */

	int getPassengerCount() const;
	/* Mengembalikan jumlah penumpang pesawat */

	void travel(float distance);
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

	void boarding(int addedPassengers);
	/* Penumpang naik ke pesawat sebesar addedPassenger. 
	 * Jika pesawat tidak muat, penumpang pesawat menjadi penuh */

	void dropOff(int droppedPassengers);
	/* Penumpang turun dari pesawat sebesar droppedPassenger. 
	 * Jika jumlah penumpang kurang, kosongkan pesawat */

	void refreshNavigator(int n);
	/* Menambah n Guild Navigator operasional yang menghabiskan
	 * n * GUILD_NAVIGATOR_SPICE_DOSE spice dari stok.
	 * 
	 * Catatan:
	 * 1. Maksimum merefresh seluruh Guild Navigator yang ada di pesawat 
	 * 2. Apabila stok kurang, maka merefresh n maksimum yang dapat di refresh
	 *    dari stok spice yang ada */

	void transitToArrakis(int addedSpice);
	/* Menambah stok spice sebesar addedSpice */
};

#endif

// End of SpacingGuildShip.hpp