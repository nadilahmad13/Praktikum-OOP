/* 
 * NIM          : 13521024
 * Nama         : Ahmad Nadil
 * Responsi 3   : Generic, Exception & STL
 * File         : Generik.cpp
*/

#include <iostream>
using namespace std;

template <class T>
void func (T a, T b)
{
    cout << "Masukan Anda: " << a << " dan " << b << ", memiliki tipe yang sama" << endl;
}

template <class T, class U>
void func (T a, U b)
{
    cout << "Masukan Anda: " << a << " dan " << b << ", mungkin memiliki tipe yang berbeda" << endl;
}

template <>
void func (char a, int b)
{
    for (int i = 0; i < b; i++)
    {
        cout << a << endl;
    }
}

// int main(){
//     func(1, 2);
//     func(1.0, 2.0);
//     func('a', 'b');
//     func(1, 'a');
//     func<char,int>('a',2);
// }