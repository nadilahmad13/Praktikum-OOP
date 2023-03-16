#include "Rekening.h"
#include "RekeningGiro.h"
#include "RekeningTabungan.h"
#include <iostream>
using namespace std;

int main(){
    // create rekening tabungan
    RekeningTabungan *rt= new RekeningTabungan(-10,10);
    cout << rt->getSaldo() << endl;
}