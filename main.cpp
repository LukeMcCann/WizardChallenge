
#include "Magic.h"
#include "Potion.h"
#include "Spell.h"
#include "Transformation.h"

#include "Wizard.h"
#include "Elementalist.h"
#include "Spellswords.h"

int main() {
  Wizard **wizards = new Wizard*[2];
  wizards[0] = new Elementalist("Zebadiah", 80, 20, 5, Elementalist::fire);
  wizards[1] = new Spellswords("Red", 80, 20, 5, "Scythe");

  wizards[0]->addMagic(new Potion(50));
  wizards[0]->addMagic(new Transformation("Jaguar"));

  wizards[1]->addMagic(new Potion(30));
  wizards[1]->addMagic(new Spell("Avada kedavra"));
  wizards[1]->addMagic(new Transformation("Eagle"));

  for (int i = 0; i < 2; i++) {
    wizards[i]->display();
  }

  return 0;
}
