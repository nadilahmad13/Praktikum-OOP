#include "A.hpp"
#include <iostream>

int main(){
    A* a = new A('1');
    A* b = new A('2');
    A* c = new A(*a);
    *a = *b;
    a->show();
    a->~A();
    b->~A();
    c->~A();
}
// cons 1
// cons 2
// ccons 1
// cassign 1 = 2
// show 2
// dest 2
// dest 2
// dest 1