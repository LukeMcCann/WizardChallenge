#include "Transformation.h"

Transformation::Transformation(std::string creature) {
  _creature = creature;
};

Transformation::~Transformation() {

};

void Transformation::display() {
  std::cout << "Transformation Creature: " << _creature << std::endl;
};
