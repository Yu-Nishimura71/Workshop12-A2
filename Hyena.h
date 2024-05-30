#ifndef HYENA_H
#define HYENA_H

#include "Carnivore.h"

class Hyena: public Carnivore
{
public:
    std::string getName() override;
};

#endif //HYENA_H
