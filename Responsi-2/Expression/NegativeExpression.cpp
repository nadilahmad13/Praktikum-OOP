/*
Nama : Ahmad Nadil
NIM  : 13521024
Praktikum Responsi 2
*/

#include <iostream>
#include "NegativeExpression.hpp"
using namespace std;

NegativeExpression::NegativeExpression(Expression* x) : UnaryExpression(x) {}

int NegativeExpression::solve(){
    return x->solve() * -1;
}