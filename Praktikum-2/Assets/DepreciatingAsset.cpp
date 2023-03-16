/*
NIM     : 13521024
Nama    : Ahmad Nadil
Praktikum 2
*/
#include "DepreciatingAsset.hpp"
#include <iostream>
#include <cmath>
using namespace std;

double DepreciatingAsset::getValue(int years){
    return x->getValue(years) * pow(1-rate,years);
}