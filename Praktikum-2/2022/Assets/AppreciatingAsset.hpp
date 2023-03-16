#ifndef _APPRECIATING_ASSET_HPP_
#define _APPRECIATING_ASSET_HPP_

#include "Asset.hpp"

class AppreciatingAsset : public Asset {
protected:
  Asset* x;
  double rate;

public:
  AppreciatingAsset(Asset* x, double rate);
  double getValue(int years);
};

#endif
