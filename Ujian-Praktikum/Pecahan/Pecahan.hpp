// Kelas Pecahan
// File: Pecahan.cpp
#ifndef _PECAHAN_HPP_
#define _PECAHAN_HPP_

class pecahan {
private:
    int n; // pembilang, n >= 0
    int d; // penyebut, d > 0
public:
    // ctor: set n = 0 dan d = 1
    pecahan();

    // ctor: set n = _n dan d = _d
    pecahan(int _n, int _d);

    pecahan(const pecahan &P); // cctor:

    ~pecahan(); // dtor

    int getPemb(); // Menghasillkan pembilang n
    int getPeny(); // Menghasilkan penyebut d

    void setPemb(int _n); // Mengubah nilai n menjadi _n
    void setPeny(int _d); // Mengubah nilai d menjadi _d

    pecahan operator+(const pecahan &P);
    // Menambahkan pecahan dengan P
    // Rumus = n1/d1 + n2/d2 = (n1*d2 + n2*d1)/d1*d2

    pecahan operator-(const pecahan &P);
    // Menambahkan pecahan dengan P
    // Rumus = n1/d1 - n2/d2 = (n1*d2 - n2*d1)/d1*d2

    pecahan operator*(int x);
    // Mengalikan pembilang P dengan x dan penyebut P dengan x
    // Syarat: x > 0
    // Rumus = n1/d1 = (n1*x)/(d1*x)

    bool operator==(const pecahan &P);
    // Mengecek apakah kedua pecahan memiliki nilai yang sama
    // Hint: bandingkan dengan gcd, tidak boleh dibandingkan dengan RealP()!

    float RealP();
    // Menghasilkan bentuk desimal dari pecahan

    void Print();
    // Mencetak pecahan dalam format: n/d (tanpa tambahan karakter apa pun
    // di depan, tengah, atau belakang)
};
#endif