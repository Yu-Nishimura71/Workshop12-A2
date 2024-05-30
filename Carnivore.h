#ifndef CARNIVORE_H
#define CARNIVORE_H

#include "Animal.h"

class Carnivore : public Animal
{
    std::string getType() override;
};

#endif //CARNIVORE_H