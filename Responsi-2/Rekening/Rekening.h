// Rekening.h
#ifndef REKENING_H
#define REKENING_H

class Rekening {
public:
	// Konstruktor untuk menginisialisasi saldo
	// Set saldo 0.0 apabila saldo bernilai negatif
	Rekening(double);
	
	// Getter, Setter
	void setSaldo(double);
	double getSaldo() const;
	
	// Member Function
	// Tambahkan sejumlah nominal uang ke saldo
	void simpanUang(double); 
	
	// Kurangkan sejumlah nominal uang dari saldo apabila saldo mencukupi (tidak negatif setelah dikurangkan)
	// Kembalikan boolean yang mengindikasikan apakah uang berhasil ditarik atau tidak
	bool tarikUang(double);

private:
	double saldo;
};

#endif