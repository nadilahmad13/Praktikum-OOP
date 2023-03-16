/*
Nama : Ahmad Nadil
NIM  : 13521024
Praktikum Responsi 2
*/

#include <iostream>
#include "SubstractExpression.hpp"
using namespace std;

SubstractExpression::SubstractExpression(Expression* x, Expression* y) : BinaryExpression(x, y) {}

int SubstractExpression::solve(){
    return x->solve() - y->solve();
}