#ifndef _Base_ASSET_HPP_
#define _Base_ASSET_HPP_

#include "Asset.hpp"

class BaseAsset : public Asset {
protected:
  double buyValue;

public:
  BaseAsset(double buyValue);
  double getValue(int years);
};

#endif
