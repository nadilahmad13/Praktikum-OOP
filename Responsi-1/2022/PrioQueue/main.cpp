#include <iostream>
#include "PrioQueue.hpp"

using namespace std;

int main(){
    // Make prioque A :
    // A = [(3, 3), (5, 2), (1, 1)]
    PrioQueue A = PrioQueue();
    PQElmt temp = PQElmt(1, 1);
    A.push(temp);
    temp = PQElmt(5, 2);
    A.push(temp);
    temp = PQElmt(3, 3);
    A.push(temp);

    // Make prioque B :
    // B = [(1, 3) , (2, 2)]
    PrioQueue B = PrioQueue();
    temp = PQElmt(2, 2);
    B.push(temp);
    temp = PQElmt(1, 3);
    B.push(temp);

    // Display A and B
    A.print();
    B.print();

    // Make prioque C : which is A + B
    PrioQueue C = A + B;
    C.print();
}

// [(3, 3), (5, 2), (1, 1)]
// [(1, 3), (2, 2)]
// [(1, 3), (2, 2), (1, 1), (3, 3), (5, 2)]