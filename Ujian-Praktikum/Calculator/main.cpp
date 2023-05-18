#include "Calculator.cpp"

int main(){
    Calculator c;
    try{
        cout << c.Evaluate("2*(1+3)") << endl;
        cout << c.Evaluate("(2-3)*(5/2)") << endl;
        cout << c.Evaluate("4*(5-1)/3") << endl;
        // cout << c.Evaluate("2*(1+3") << endl;
        cout << c.Evaluate("2*1+3)") << endl;
        cout << c.Evaluate("2*1+3") << endl;
    }
    catch(SymbolUnidentifiedException e){
        cout << e.what() << endl;
    }
    catch(DivideByZeroException e){
        cout << e.what() << endl;
    }
}