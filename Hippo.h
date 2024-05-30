#ifndef HIPPO_H
#define HIPPO_H

#include "Herbivore.h"

class Hippo: public Herbivore
{
public:
    std::string getName() override;
};

#endif //HIPPO_H
