/*
Nama : Ahmad Nadil
NIM  : 13521024
Praktikum Responsi 2
*/

#include "Expression.hpp"

TerminalExpression::TerminalExpression(int x) {
    this->x = x;
}

int TerminalExpression::solve() {
    return this->x;
}

UnaryExpression::UnaryExpression(Expression* x) {
    this->x = x;
}

BinaryExpression::BinaryExpression(Expression* x, Expression* y) {
    this->x = x;
    this->y = y;
}