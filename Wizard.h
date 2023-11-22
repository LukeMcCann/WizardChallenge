#pragma once

#include "Magic.h"

#include <string>

class Wizard {
  public:
    Wizard(
      std::string name,
      int knowledge,
      int skill,
      int maxMagic
    );
    ~Wizard();

    void addMagic(Magic* magic);
    virtual void display();

  private:
    int _knowledge;
    int _magicCount;
    Magic** _magicInventory;

    std::string _name;
    int _skill;
};
