#include "A.hpp"

using namespace std;

A::A(char d) {
    data = d;
    cout << "cons " << d << endl;
}

A::A(const A& other) {
    data = other.data;
    cout << "ccons " << data << endl;
}

A::~A() {
    cout << "dest " << data << endl;
}

A& A::operator=(const A& other) {
    cout << "cassign " << data << " = " << other.data << endl;
    data = other.data;
    return *this;
}

void A::show() {
    cout << "show " << data << endl;
}