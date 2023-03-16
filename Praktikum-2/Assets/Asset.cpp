#include "Asset.hpp"

#include "AppreciatingAsset.hpp"
#include "BaseAsset.hpp"
#include "DepreciatingAsset.hpp"

BaseAsset::BaseAsset(double buyValue) {
  this->buyValue = buyValue;
}

double BaseAsset::getValue(int years) {
  return this->buyValue;
}

AppreciatingAsset::AppreciatingAsset(Asset* x, double rate) {
  this->x = x;
  this->rate = rate;
}

DepreciatingAsset::DepreciatingAsset(Asset* x, double rate) {
  this->x = x;
  this->rate = rate;
}
