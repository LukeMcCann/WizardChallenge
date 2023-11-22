#include "Spellswords.h"

Spellswords::Spellswords(
  std::string name,
  int knowledge,
  int skill,
  int maxMagic,
  std::string weapon
): Wizard(
  name,
  knowledge,
  skill,
  maxMagic
) {
  _weapon = weapon;
};

Spellswords::~Spellswords() {

};

void Spellswords::display() {
  Wizard::display();
  std::cout << "Weapon: " << _weapon << std::endl;
};
