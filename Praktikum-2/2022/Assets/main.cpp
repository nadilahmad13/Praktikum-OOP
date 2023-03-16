#include "Asset.hpp"
#include "AppreciatingAsset.hpp"
#include "BaseAsset.hpp"
#include "DepreciatingAsset.hpp"

#include <iostream>
using namespace std;

int main()
{
    BaseAsset *base = new BaseAsset(100);
    AppreciatingAsset *a = new AppreciatingAsset(base, 0.5);
    cout << a->getValue(10) << endl;
    DepreciatingAsset *d = new DepreciatingAsset(base, 0.5);
    cout << d->getValue(10) << endl;
    return 0;
} 