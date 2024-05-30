#ifndef GIRAFFE_H
#define GIRAFFE_H

#include "Herbivore.h"

class Giraffe: public Herbivore
{
public:
    std::string getName() override;
};

#endif

