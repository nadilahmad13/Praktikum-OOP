// RekeningGiro.h
#ifndef REKENINGGIRO_H
#define REKENINGGIRO_H

#include "Rekening.h" // include the Account header file

class RekeningGiro : public Rekening {
public:
	// Konstruktor menginisialisi saldo (parameter 1) dan suku bunga (parameter 2)
	// Set suku bunga 0.0 apabila suku bunga bernilai negatif
	RekeningGiro(double, double);

	// Getter, Setter
	void setSukuBunga(double);
	double getSukuBunga() const;
	
	// Member Function
	// Bunga dihitung dari saldo dikali suku bunga
	double hitungBunga();
	
private:
	double sukuBunga;
};

#endif