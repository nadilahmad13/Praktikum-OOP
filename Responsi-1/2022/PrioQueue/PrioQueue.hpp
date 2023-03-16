// PrioQueue.hpp
#ifndef __PRIOQUEUE__HPP__
#define __PRIOQUEUE__HPP__

#include "PQElmt.hpp"

class PrioQueue {
private:
  PQElmt* queue;
  int neff;
  int maxEl;

public:
  PrioQueue();
  PrioQueue(int maxEl);
  PrioQueue(const PrioQueue& pq);
  ~PrioQueue();
  void push(PQElmt el);
  // Menambahkan elemen ke array queue pada indeks pertama
  // sehingga seluruh elemen sesudahnya bernilai lebih besar
  // dari el
  PQElmt pop();
  // Menghapus elemen pertama dari array,
  // menggeser semua elemen rapat kiri,
  // dan mengembalikan elemen pertama.

  friend PrioQueue operator+(const PrioQueue& a, const PrioQueue& b);
  // Membuat PrioQueue baru dengan maxEl = a.maxEl + b.maxEl dan
  // berisi gabungan dari elemen kedua PrioQueue
  PQElmt operator[](int k);
  // Mengakses elemen ke-k dari PrioQueue. Jika k bukan indeks yang valid,
  // kembalikan elemen default

  void print();
  // Menampilkan isi PrioQueue
  // contoh: [(3, 3), (5, 2), (1, 1)]
};

#endif