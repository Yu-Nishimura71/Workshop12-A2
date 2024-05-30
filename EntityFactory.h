#ifndef ENTITY_FACTORY
#define ENTITY_FACTORY

#include "Entity.h"
#include "Animal.h"
#include <string>

class EntityFactory {
public:
    static EntityFactory& getInstance() {
        static EntityFactory instance;
        return instance;
    }

    // Takes param types of either Animal (e.g., lion) or type (e.g., carnivore).
    Animal* makeAnimal(std::string& type);
protected:
    EntityFactory();
    
    EntityFactory(EntityFactory const&) = delete;
    void operator=(EntityFactory const&) = delete;
};

#endif // !ENTITY_FACTORY
