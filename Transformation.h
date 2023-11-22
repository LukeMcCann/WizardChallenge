#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#include <string>

#include "Magic.h"

class Transformation : public Magic {
  public:
    ~Transformation();
    Transformation(std::string creature);

    void display();

  private:
    std::string _creature;
};

#endif
