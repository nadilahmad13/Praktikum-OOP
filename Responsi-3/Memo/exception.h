#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H

#include<exception>
using namespace std;

struct KertasHabisException : public exception  {
	const char* what() const throw() {
		return "Kertas habis";
	}
};

struct TintaKurangException : public exception  {
	const char* what() const throw() {
		return "Tinta tidak cukup";
	}
};

struct EnergiHabisException : public exception  {
	const char* what() const throw() {
		return "Tidak ada energi";
	}
};

struct PesanKepanjanganException : public exception  {
	const char* what() const throw() {
		return "Pesan terlalu panjang";
	}
};

#endif