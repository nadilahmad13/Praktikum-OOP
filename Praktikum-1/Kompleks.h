#ifndef KOMPLEKS_H
#define KOMPLEKS_H

class Kompleks {
  public:
    // ctor tanpa parameter
    // inisialisasi seluruh koefisien dengan nilai 0
    Kompleks();

    // ctor dengan parameter
    Kompleks(int real, int imaginer);
    
    //mengembalikan bagian riil
    int GetReal() const;

    // mengembalikan bagian imaginer
    int GetImaginer() const;

    // mengisi bagian riil
    void SetReal(int);

    // mengisi bagian imaginer
    void SetImaginer(int);

    // operator overloading

    // operator+ untuk melakukan penjumlahan dengan rumus berikut
    // (a + bi) + (c + di) = (a+c) + (b+d)i
    friend Kompleks operator+ (const Kompleks&, const Kompleks&);

    // operator- untuk melakukan pengurangan dengan rumus berikut
    // (a + bi) − (c + di) = (a−c) + (b−d)i
    friend Kompleks operator- (const Kompleks&, const Kompleks&);

    // operator* untuk melakukan perkalian dengan rumus berikut
    // (a + bi)(c + di) = ac + bci + adi + bd i^2 = (ac−bd) + (bc+ad)i
    friend Kompleks operator* (const Kompleks&, const Kompleks&);

    // operator* untuk mengkalikan bilangan kompleks dengan konstanta
    // (a + bi)(c) = (ac) + (bc)i
    friend Kompleks operator* (const Kompleks&, const int);

    // operator* untuk mengkalikan bilangan kompleks dengan konstanta (sifat komutatif)
    friend Kompleks operator* (const int, const Kompleks&);

    // mengembalikan jumlah instance yang pernah dibuat
    static int CountKompleksInstance();

    // mencetak bilangan kompleks ke layar, diakhiri dengan end-of-line 
    // contoh:
    // 3+5i
    // 0+0i
    // -5-4i
    void Print();

  private:
    static int n_kompleks;
    int real;
    int imaginer;
};

#endif