#include <iostream>
#include "Expression.hpp"
#include "AddExpression.hpp"
#include "SubstractExpression.hpp"
#include "NegativeExpression.hpp"
using namespace std;

int main(){
    AddExpression * e = new AddExpression(
    new TerminalExpression(4),
    new TerminalExpression(6)
    );
    cout << e->solve() << endl;

    SubstractExpression* f = new SubstractExpression(
    new TerminalExpression(4),
    new TerminalExpression(6)
    );
    cout <<f->solve() << endl;

    NegativeExpression * g = new NegativeExpression(
    new TerminalExpression(1)
    );
    cout << g->solve() << endl;
}