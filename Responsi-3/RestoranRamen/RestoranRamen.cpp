/* 
 * NIM          : 13521024
 * Nama         : Ahmad Nadil
 * Responsi 3   : Generic, Exception & STL
 * File         : RestoranRamen.cpp
*/

#include "RestoranRamen.hpp"

// Menambah jumlah order yang dipesan oleh meja n, dengan harga p
// Jika meja sudah diisi maka akan menambah total yang telah dipesan
void RestoranRamen::tambahOrder(int n, int p){
    daftarMeja[n] += p;
}

// Mengembalikan total harga pesanan pada meja n, menghapus entri untuk meja tersebut
int RestoranRamen::tutupOrder(int n){
    int temp = daftarMeja[n];
    daftarMeja.erase(n);
    return temp;
}

// Mengembalikan total harga pesanan pada meja n
int RestoranRamen::cekTotal(int n){
    return daftarMeja[n];
}

// Mengembalikan jumlah meja yang terisi saat itu
// Restoran mungkin kosong
int RestoranRamen::totalMeja(){
    return daftarMeja.size();
}

// Mencetak semua meja yang terisi pada restoran diakhiri dengan new line
// Contoh : 
/*
    Meja 1 = 5000
    Meja 2 = 3000
    Meja 4 = 10000
*/
// Jika restoran kosong akan mencetak "Restoran kosong" diakhiri new line
void RestoranRamen::cetakMeja(){
    if (daftarMeja.size() == 0){
        cout << "Restoran kosong" << endl;
    }
    else{
        for (map<int,int>::iterator itr = daftarMeja.begin(); itr != daftarMeja.end(); itr++){
            cout << "Meja " << itr->first << " = " << itr->second << endl;
        }
    }
}