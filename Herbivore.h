#ifndef HERBIVORE_H
#define HERBIVORE_H

#include <iostream>
#include "Animal.h"

class Herbivore : public Animal
{
public:
    Herbivore() {}
    void getType() {
        std::cout << "I am a Herbivore" << std::endl;
    }
};

#endif //HERBIVORE_H
