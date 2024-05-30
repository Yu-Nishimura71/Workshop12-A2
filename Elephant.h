#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "Herbivore.h"

class Elephant: public Herbivore
{
    std::string getName() override;

};

#endif //ELEPHANT_H