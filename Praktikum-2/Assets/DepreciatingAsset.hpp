#ifndef _DEPRECIATING_ASSET_HPP_
#define _DEPRECIATING_ASSET_HPP_

#include "Asset.hpp"

class DepreciatingAsset : public Asset {
protected:
  Asset* x;
  double rate;

public:
  DepreciatingAsset(Asset* x, double rate);
  double getValue(int years);
};

#endif
