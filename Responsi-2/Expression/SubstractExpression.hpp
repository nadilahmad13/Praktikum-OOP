/*
Nama : Ahmad Nadil
NIM  : 13521024
Praktikum Responsi 2
*/

#ifndef _SUBSTRACTEXPRESSION_HPP_
#define _SUBSTRACTEXPRESSION_HPP_

#include "Expression.hpp"

class SubstractExpression : public BinaryExpression {
    public:
        SubstractExpression(Expression* x, Expression* y);
        int solve();
};

#endif