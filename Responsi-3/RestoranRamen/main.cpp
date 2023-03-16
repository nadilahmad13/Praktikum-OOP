#include "RestoranRamen.hpp"

int main(){
    RestoranRamen resto;
    resto.tambahOrder(0, 1000);
    resto.tambahOrder(1, 3000);
    resto.tambahOrder(1, 2000);
    resto.tambahOrder(2, 3000);
    resto.tambahOrder(3, 2000);
    cout << resto.tutupOrder(0) << endl;
    resto.tutupOrder(3);
    resto.tambahOrder(4, 10000);
    resto.cetakMeja();
    cout << resto.totalMeja() << endl;

    RestoranRamen resto2;
    resto2.cetakMeja();
}
// 1000
// Meja 1 = 5000
// Meja 2 = 3000
// Meja 4 = 10000
// 3
// Restoran kosong