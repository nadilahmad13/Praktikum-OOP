#include "Box.hpp"
#include <iostream>
using namespace std;

int main(){
    Box* Box2 = new Box(2);
    Box* Box0 = new Box();
    Box* Box1 = new Box(1);
    *Box0 = *Box2;
    Box* BoxCopy = new Box(*Box1);
    Box2->peek();
    Box1->peek();
    Box2->~Box();
    Box1->~Box();
    BoxCopy->~Box();
    Box0->~Box();
}

// new empty box 2
// new empty box with default id 0
// new empty box 1
// assign box 0 <- 2
// copy box 1
// box 2
// box 1
// destroy box 2
// destroy box 1
// destroy box 1
// destroy box 2