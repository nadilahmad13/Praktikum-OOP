#include "Bottle.hpp"
#include <iostream>
using namespace std;
int main(){
    Bottle b1;
    Bottle b2(20.00, 10.00);
    b1.addWater(1000.00);
    b2.addWater(1000.00);
    b1.pourWaterTo(b2);
    b2.substractWater(100.00);
    b2.getBottleVolume();
    cout << b1.getWaterVolume() << endl;
    cout << b2.getWaterVolume() << endl;
}