#include "EntityFactory.h"
#include "Carnivore.h"
#include "Herbivore.h"
#include "Lion.h"
#include "Hyena.h"
#include "Giraffe.h"
#include "Hippo.h"
#include "Elephant.h"
#include "Human.h"
#include <random>

EntityFactory::EntityFactory() {

}

Entity* EntityFactory::makeAnimal(std::string& type) {
    std::random_device rand;
    std::mt19937 randGenerator(rand());
    std::uniform_int_distribution<> carnivoreDis(0,1);
    std::uniform_int_distribution<> herbivoreDis(0, 2);

    if (type == "Carnivore") {
        int randomInt = carnivoreDis(randGenerator);
        if (randomInt == 0) {
            return new Lion;
        }
        else {
            return new Hyena;
        }
    }
    else if (type == "Herbivore") {
        int randomInt = herbivoreDis(randGenerator);
        if (randomInt == 0) {
            return new Giraffe;
        }
        else if (randomInt == 1) {
            return new Hippo;
        }
        else {
            return new Elephant;
        }
    }
    else if (type == "Lion") {
        return new Lion;
    }
    else if (type == "Hyena") {
        return new Hyena;
    }
    else if (type == "Giraffe") {
        return new Giraffe;
    }
    else if (type == "Hippo") {
        return new Hippo;
    }
    else if (type == "Elephant") {
        return new Elephant;
    }

    return nullptr;
}

Entity* EntityFactory::makeHuman(std::string& name) {

    Human *human = new Human(name);
    
    return human;


}