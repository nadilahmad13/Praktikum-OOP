#include "Polinom.hpp"
#include <iostream>
using namespace std;

int main(){
    Polinom p1(3);
    p1.input();
    p1.printKoef();
    cout << p1.substitute(2) << endl;
    p1.print();
    return 0;
}