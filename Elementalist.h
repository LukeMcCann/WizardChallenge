#ifndef ELEMENTALIST_H
#define ELEMENTALIST_H

#include "Wizard.h"

class Elementalist : public Wizard {
  public:
    enum TElements { earth, wind, fire, water };

  private:
    TElements _specialism;

  public:
    Elementalist(
      std::string name,
      int knowledge,
      int skill,
      int maxMagic,
      TElements specialism
    );
    ~Elementalist();

    void display() override;
};

#endif
