#ifndef SPELL_H
#define SPELL_H

#include "Magic.h"

#include <string>

class Spell : public Magic {
  public:
    ~Spell();
    Spell(std::string words);

    void display();

  private:
    std::string _words;
};

#endif
