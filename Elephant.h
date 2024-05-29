#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "Animal.h"
#include "Herbivore.h"

class Elephant: public Animal, public Herbivore
{
private:
    double _x;
    double _y;
};

#endif //ELEPHANT_H