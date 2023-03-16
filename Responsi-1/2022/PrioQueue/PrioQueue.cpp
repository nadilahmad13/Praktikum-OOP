#include "PrioQueue.hpp"
#include <iostream>

PrioQueue::PrioQueue() {
  this->neff = 0;
  this->maxEl = 20;
  this->queue = new PQElmt[this->maxEl];
}

PrioQueue::PrioQueue(int maxEl) {
  this->neff = 0;
  this->maxEl = maxEl;
  this->queue = new PQElmt[this->maxEl];
}

PrioQueue::PrioQueue(const PrioQueue& pq) {
  this->neff = pq.neff;
  this->maxEl = pq.maxEl;
  this->queue = new PQElmt[this->maxEl];
  for (int i = 0; i < this->maxEl; i++) {
    this->queue[i] = pq.queue[i];
  }
}

PrioQueue::~PrioQueue() {
  delete[] this->queue;
}

void PrioQueue::push(PQElmt el) {
  int idx = this->neff;
  while (idx > 0 && el > this->queue[idx - 1]) {
    this->queue[idx] = this->queue[idx - 1];
    idx--;
  }
  this->queue[idx] = el;
  this->neff += 1;
}

PQElmt PrioQueue::pop() {
  PQElmt val = this->queue[0];
  for (int i = 0; i < this->neff - 1; i++) {
    this->queue[i] = this->queue[i + 1];
  }
  this->neff -= 1;
  return val;
}

PQElmt PrioQueue::operator[](int k) {
  // Mengakses elemen ke-k dari PrioQueue. Jika k bukan indeks yang valid,
  // kembalikan elemen default
  if (k < this->neff){
    return queue[k];
  }
  else{
    return queue[0];
  }
}

PrioQueue operator+(const PrioQueue& a, const PrioQueue& b) {
  // Membuat PrioQueue baru dengan maxEl = a.maxEl + b.maxEl dan
  // berisi gabungan dari elemen kedua PrioQueue
  PrioQueue nQ(a.maxEl+b.maxEl);
  for (int i = 0 ; i < a.neff ; i++){
    nQ.push(a.queue[i]);
  }
  for (int i = 0 ; i < b.neff ; i++){
    nQ.push(b.queue[i]);
  }
  return nQ;
}

void PrioQueue::print() {
  // Menampilkan isi PrioQueue
  // contoh: [(3, 3), (5, 2), (1, 1)]
  std::cout << "[";
  for (int i = 0 ; i < this->neff ; i++){
    std::cout << "(" << this->queue[i].getValue() << ", " << this->queue[i].getPrio() << ")";
    if (i != this->neff-1){
      std::cout << ", ";
    }
  }
  std::cout << "]" << std::endl;
}