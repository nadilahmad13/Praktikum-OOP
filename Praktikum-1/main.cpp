/*
AHMAD NADIL
13521024
*/
#include "Paper.hpp"

int main(){
	Paper* A = new Paper('A');
	Paper* B = new Paper('B');
	Paper* C = new Paper('C');
	Paper* cctor = new Paper(*C);
	A->fold();
	B->fold();
	C->fold();
	C->glue();
	C->setName('X');
	cctor->fold();
	cctor->glue();
	cctor->~Paper();
	C->~Paper();
	B->~Paper();
	A->~Paper();
}

// ctor A
// ctor B
// ctor C
// cctor C
// fold A(1)
// fold B(1)
// fold C(1)
// glue C
// fold C(2)
// setName C => X
// fold C(1)
// glue C
// fold C(2)
// dtor C
// dtor X
// dtor B
// dtor A