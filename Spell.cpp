#include "Spell.h"

Spell::Spell(std::string words) {
  _words = words;
};

Spell::~Spell() {

};

void Spell::display() {
  std::cout << "Spell Words: " << _words << std::endl;
};
