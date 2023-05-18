#ifndef CEXCEPTION_HPP
#define CEXCEPTION_HPP

#include<exception>
using namespace std;

struct DivideByZeroException : public exception  {
	const char* what() const throw() {
		return "Tidak boleh dibagi dengan nol";
	}
};

struct SymbolUnidentifiedException : public exception  {
	const char* what() const throw() {
		return "Simbol tidak dikenali";
	}
};

#endif