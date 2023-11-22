#ifndef POTION_H
#define POTION_H

#include "Magic.h"

class Potion : public Magic {
  public:
    ~Potion();
    Potion(int dose);

    void display();

  private:
    int _dose;
};

#endif
