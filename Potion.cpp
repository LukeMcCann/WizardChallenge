#include "Potion.h"

Potion::Potion(int dose) {
  _dose = dose;
};

Potion::~Potion() {

};

void Potion::display() {
  std::cout << "Potion Dose: " << _dose << std::endl;
};
