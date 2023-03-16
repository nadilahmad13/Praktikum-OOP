#ifndef MEMO_H
#define MEMO_H

#include <string>
#include "exception.h"
using namespace std;

class Memo {
	public:
		/* 
			Membuat objek Memo dengan 'pesan' dan 'untuk' kosong
		*/
		Memo();
		/* 
			Membuat objek Memo dengan isi sesuai yang diberikan.
			
			Jika panjang pesan melebihi panjang maksimum, maka
			metode ini melemparkan PesanKepanjanganException.
		*/
		Memo(string pesan, string untuk);
		/* 
			Menyalin nilai pesan dan untuk ke objek lain
		*/
		Memo& operator=(Memo& obj);
		/*
			Mendapatkan nilai pesan
		*/
		string getPesan();
		/*
			Mendapatkan nilai untuk
		*/
		string getUntuk();

	private:
		/*
			Panjang maksimum pesan. Semua karakter dihitung
			(termasuk spasi, titik, dsb.)
		*/
		const int PESAN_MAX = 50;
		string pesan;
		string untuk;
};

#endif