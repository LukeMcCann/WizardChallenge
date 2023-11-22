#include "Wizard.h"

Wizard::Wizard(std::string name, int knowledge, int skill, int maxMagic) {
  _name = name;
  _knowledge = knowledge;
  _skill = skill;
  _magicCount = 0;
  _magicInventory = new Magic*[maxMagic];
};

Wizard::~Wizard() {
  for (int i = 0; i < _magicCount; ++i) {
    delete _magicInventory[i];
  }

  delete[] _magicInventory;
};

void Wizard::addMagic(Magic* magic) {
  _magicInventory[_magicCount] = magic;
  _magicCount++;
};

void Wizard::display() {
  std::cout << "Name: " << _name << "\n";
  std::cout << "Knowledge: " << _knowledge << "\n";
  std::cout << "Skill: " << _skill << "\n";

  for (int i = 0; i < _magicCount; i++) {
    _magicInventory[i]->display();
  }
};
