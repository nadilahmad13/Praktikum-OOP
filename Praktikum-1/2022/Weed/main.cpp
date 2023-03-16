#include "Weed.hpp"
using namespace std;

int main()
{
    Weed a;
    Weed b(3);
    Weed c(b);

    a.step();
    b.step();
    c.step();

    return 0;
}