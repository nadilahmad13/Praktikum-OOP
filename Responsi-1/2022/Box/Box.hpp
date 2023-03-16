#ifndef __BOX_HPP__
#define __BOX_HPP__

class Box {
  private:
    int id;

  public:
    Box();
    Box(int);
    Box(const Box&);
    Box& operator=(const Box&);
    ~Box();

    void peek();
};

#endif