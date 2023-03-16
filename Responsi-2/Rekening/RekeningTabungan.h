// RekeningTabungan.h
#ifndef REKENINGTABUNGAN_H
#define REKENINGTABUNGAN_H

#include "Rekening.h"

class RekeningTabungan : public Rekening {
public:
	// Konstruktor menginisialisi saldo (parameter 1) dan biaya transaksi (parameter 2)
	// Set biaya transaksi 0.0 apabila biaya transaksi bernilai negatif
	RekeningTabungan(double, double);

	// Getter, Setter
	void setBiayaTransaksi(double);
	double getBiayaTransaksi() const;
	
	// Member Function
	// Panggil fungsi simpanUang dari parent class
	// Kurangkan saldo dengan biaya transaksi
	void simpanUang(double);

	// Panggil fungsi tarikUang dari parent class
	// Kurangkan saldo dengan biaya transaksi hanya jika penarikan uang berhasil
	// Saldo mungkin saja menjadi negatif apabila setelah penarikan, saldo < biaya transaksi
	// Kembalikan boolean yang mengindikasikan apakah uang berhasil ditarik atau tidak
	bool tarikUang(double);

private:
	double biayaTransaksi;
};

#endif