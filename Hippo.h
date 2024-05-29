#ifndef HIPPO_H
#define HIPPO_H

#include "Animal.h"
#include "Herbivore.h"

class Hippo: public Animal, public Herbivore
{
private:
    double _x;
    double _y;
};

#endif //HIPPO_H
