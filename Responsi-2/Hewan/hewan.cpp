#include "Hewan.h"
int main() {
	Hewan *array_hewan[3];
	Hewan a("a");
	Kucing b("b");
	Anjing c("c");
	array_hewan[0] = &a;
	array_hewan[1] = &b;
	array_hewan[2] = &c;
	
	for(int i=0;i<3;i++) {
		array_hewan[i]->print(); //Keluaran = "[Makhluk] ini namanya [nama]\n"
	}
	array_hewan[1] = &c;
	array_hewan[1]->print();
	Kucing *d = new KucingAnggora("d","1");
	Anjing *e = new AnjingBulldog("e","2");;
	d->print();
	e->print();
	KucingAnggora f("f","3");
	AnjingBulldog g("g","4");
	f.print();
	g.print();
	delete e;
	delete d;
	return 0;
}
// Hewan ini namanya a
// Hewan ini namanya b
// Anjing ini namanya c
// Anjing ini namanya c
// Kucing anggora ini namanya d. Pemiliknya adalah 1
// Anjing bulldog ini namanya e. Pemiliknya adalah 2
// Kucing anggora ini namanya f. Pemiliknya adalah 3
// Anjing bulldog ini namanya g. Pemiliknya adalah 4
// Anjing mati e
// Hewan mati e
// Kucing anggora mati d
// Kucing mati d
// Hewan mati d
// Anjing bulldog mati g
// Anjing mati g
// Hewan mati g
// Kucing anggora mati f
// Kucing mati f
// Hewan mati f
// Anjing mati c
// Hewan mati c
// Kucing mati b
// Hewan mati b
// Hewan mati a