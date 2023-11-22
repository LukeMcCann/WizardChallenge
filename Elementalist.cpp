#include "Elementalist.h"

Elementalist::Elementalist(
  std::string name,
  int knowledge,
  int skill,
  int maxMagic,
  TElements specialism
): Wizard(
  name,
  knowledge,
  skill,
  maxMagic
) {
  _specialism = specialism;
};

void Elementalist::display() {
  Wizard::display();

  std::cout << "Specialism: ";
  switch (_specialism) {
    case TElements::earth:
      std::cout << "Earth";
      break;
    case TElements::wind:
      std::cout << "Wind";
      break;
    case TElements::fire:
      std::cout << "Fire";
      break;
    case TElements::water:
      std::cout << "Water";
      break;
    default:
      std::cout << "Undefined";
  }

  std::cout << std::endl;
}
