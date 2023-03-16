#ifndef __TOOL_HPP__
#define __TOOL_HPP__

class Tool {
public:
  // Ctor, Cctor, Dtor, dan operasi assignment
  Tool();
  Tool(int numRawIngots, int numSticks);
  Tool(const Tool&);
  virtual ~Tool();
  Tool& operator=(const Tool&);

  void enchant();
  void repair();
  virtual void use();

protected:
  int numRawIngots;  // jumlah ingot dalam crafting
  int numSticks;     // jumlah stick dalam crafting
};

#endif