#ifndef GIRAFFE_H
#define GIRAFFE_H

#include "Animal.h"
#include "Herbivore.h"

class Giraffe: public Animal, public Herbivore
{
private:
    double _x;
    double _y;
};

#endif

