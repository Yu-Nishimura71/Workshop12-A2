#ifndef HERBIVORE_H
#define HERBIVORE_H

#include "Animal.h"

class Herbivore : public Animal
{
public:
    Herbivore() {}
    std::string getType() override;
};

#endif //HERBIVORE_H
