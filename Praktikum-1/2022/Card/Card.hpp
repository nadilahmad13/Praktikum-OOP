#ifndef __CARD_HPP__
#define __CARD_HPP__

class Card {
  private:
    int num;

  public:
    Card();
    Card(int);
    Card(const Card&);
    Card& operator=(const Card&);
    ~Card();

    void gesek();        
};

#endif