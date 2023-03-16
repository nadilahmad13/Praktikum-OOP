#include "BigNumber.hpp"
#include <iostream>
using namespace std;

int main(){
    BigNumber* A = new BigNumber(123);
    BigNumber* B = new BigNumber(2210);
    BigNumber C = *A + *B;
    // printBigNumber C
    for (int i = BigNumber::getMaxDigit() - 1; i >= 0; i--) {
        cout << C[i];
    }
}