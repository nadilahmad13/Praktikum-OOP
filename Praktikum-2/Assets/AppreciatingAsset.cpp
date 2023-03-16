/*
NIM     : 13521024
Nama    : Ahmad Nadil
Praktikum 2
*/
#include "AppreciatingAsset.hpp"
#include <iostream>
#include <cmath>
using namespace std;

double AppreciatingAsset::getValue(int years){
    return x->getValue(years) * pow(1+rate,years);
}