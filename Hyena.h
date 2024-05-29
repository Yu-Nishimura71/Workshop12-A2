#ifndef HYENA_H
#define HYENA_H

#include "Animal.h"
#include "Carnivore.h"

class Hyena: public Animal, public Carnivore
{
private:
    double _x;
    double _y;
};

#endif //HYENA_H
