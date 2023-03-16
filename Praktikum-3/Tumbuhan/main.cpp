#include "Tumbuhan.hpp"

int main() {
	Tumbuhan *array_tumbuhan[3];
	Tumbuhan a("a");
	TumbuhanMakan b("b", "6");
	TumbuhanObat c("c", "7");
	array_tumbuhan[0] = &a;
	array_tumbuhan[1] = &b;
	array_tumbuhan[2] = &c;

	for(int i=0;i<3;i++) {
		array_tumbuhan[i]->print();
        array_tumbuhan[i]->print2();
	}
	array_tumbuhan[1] = &c;
	array_tumbuhan[1]->print();

    TumbuhanMakan *p = new Padi("i", "8");
    p->print();
    p->print2();

	TumbuhanMakan *d = new Jagung("d","1");
	TumbuhanObat *e = new Jahe("e","2");;
    delete p;
	d->print();
	e->print();
    d->print2();
    e->print2();
	Jagung f("f","3");
	Jahe g("g","4");

	f.print();
	g.print();
    f.print2();
    g.print2();
    TumbuhanObat *array_obat[3];
    array_obat[0] = &c;
    array_obat[1] = new Kencur("h", "5");
    array_obat[2] = &g;

    for (int i=0; i < 3; i++) {
        array_obat[i]->print2();
        array_obat[i]->print();
    }
    delete array_obat[1];
	delete e;
	delete d;
	return 0;
}
