// PQElmt.hpp
#ifndef __PQELMT__HPP__
#define __PQELMT__HPP__

class PQElmt {
private:
  int value;
  int prio;
public:
  PQElmt(); // membuat elemen dengan value = 0 dan prio = 0
  PQElmt(int value, int prio);
  PQElmt(const PQElmt& other);
  ~PQElmt();

  int getValue() const;
  int getPrio() const;

  bool operator==(const PQElmt& other);
  // value dan prio bernilai sama
  bool operator<(const PQElmt& other);
  // mengembalikan true jika elemen ini memiliki prio lebih kecil
  // jika prio sama, mengembalikan true jika elemen ini memiliki value lebih besar
  bool operator>(const PQElmt& other);
  // mengembalikan true jika elemen ini memiliki prio lebih besar
  // jika prio sama, mengembalikan true jika elemen ini memiliki value lebih kecil
};

#endif