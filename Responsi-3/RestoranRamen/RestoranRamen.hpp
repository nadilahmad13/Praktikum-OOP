#ifndef RESTORANRAMEN_H
#define RESTORANRAMEN_H

#include <map>
#include <iostream>
using namespace std;

    class RestoranRamen
    {
        public:
            // Menambah jumlah order yang dipesan oleh meja n, dengan harga p
            // Jika meja sudah diisi maka akan menambah total yang telah dipesan
            void tambahOrder(int n, int p);
            
            // Mengembalikan total harga pesanan pada meja n, menghapus entri untuk meja tersebut
            int tutupOrder(int n);
            
            // Mengembalikan total harga pesanan pada meja n
            int cekTotal(int n);
            
            // Mengembalikan jumlah meja yang terisi saat itu
            // Restoran mungkin kosong
            int totalMeja();
            
            // Mencetak semua meja yang terisi pada restoran diakhiri dengan new line
            // Contoh : 
            /*
                Meja 1 = 5000
                Meja 2 = 3000
                Meja 4 = 10000
            */
            // Jika restoran kosong akan mencetak "Restoran kosong" diakhiri new line
            void cetakMeja();
            
        private:
            map<int,int> daftarMeja;
    };

#endif