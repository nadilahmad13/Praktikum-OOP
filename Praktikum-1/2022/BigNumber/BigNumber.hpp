// BigNumber.hpp
#ifndef __BIGNUMBER__HPP__
#define __BIGNUMBER__HPP__

#include <iostream>
using namespace std;

class BigNumber {
private:
  int* digit;
  static const int max_digit;

public:
  BigNumber();
  BigNumber(int number);
  BigNumber(string aVeryBigNumber);
  BigNumber(const BigNumber& bn);
  ~BigNumber();

  static int getMaxDigit();
  void setDigit(int i, int digit);

  int operator[](int i) const;
  int& operator[](int i);

  // implement method-method berikut
  bool operator==(const BigNumber& other);
  bool operator<(const BigNumber& other);
  bool operator>(const BigNumber& other);
  BigNumber operator+(const BigNumber& other);
};

#endif