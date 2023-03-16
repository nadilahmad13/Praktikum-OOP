#include "Weed.hpp"
using namespace std;

Weed::Weed()       // Membuat Weed dengan jumlah kawanan 1
{
    many = 1;
}

Weed::Weed(int n)  // Membuat Weed dengan jumlah kawanan n
{
    many = n;
}

Weed::Weed(const Weed &b){
    this->many = b.many;
}

Weed::~Weed(){}

void Weed::step()  // Menghasilkan bunyi "kresek..." berulang
                // sebanyak n kawanan
{
    for (int i = 0 ; i < many ; i++){
        cout << "kresek...";
    }
    cout << endl;
}