#ifndef _ASSET_HPP_
#define _ASSET_HPP_

class Asset {
public:
  Asset() {
  }
  virtual double getValue(int years) = 0;
};

#endif
