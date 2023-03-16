#include "Weed.hpp"
using namespace std;

Weed::Weed() 
{
    // Membuat Weed dengan jumlah kawanan 1
    this->many = 1;
}

Weed::Weed(int n) 
{
    // Membuat Weed dengan jumlah kawanan n
    this->many = n;
}

Weed::Weed(const Weed &b)
{
    this->many = b.many;
}

void Weed::step()
{
    // Menghasilkan bunyi "kresek..." berulang
    // sebanyak n kawanan
    for (int i = 0 ; i < this->many ; i++)
    {
        cout << "kresek...";
    }
    cout << endl;
}

Weed::~Weed()
{
    // cout << "Weed destroyed" << endl;
}