#ifndef SPELLSWORDS_H
#define SPELLSWORDS_H

#include "Wizard.h"

class Spellswords : public Wizard {
  public:
    Spellswords(
      std::string name,
      int knowledge,
      int skill,
      int maxMagic,
      std::string weapon
    );
    ~Spellswords();

    void display();

  private:
    std::string _weapon;
};

#endif
