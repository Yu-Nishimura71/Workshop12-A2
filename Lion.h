#ifndef LION_H
#define LION_H

#include "Carnivore.h"

class Lion: public Carnivore
{
public:
    std::string getName() override;
};

#endif //LION_H