#ifndef ENTITY_FACTORY
#define ENTITY_FACTORY

#include "Entity.h"

#include <string>

class EntityFactory {
public:
    static EntityFactory& getInstance() {
        static EntityFactory instance;
        return instance;
    }

    // Takes param types of either Animal (e.g., lion) or type (e.g., carnivore).
    Entity* makeAnimal(std::string& type);

    // Takes param type of human name
    Entity* makeHuman(std::string& _name);
protected:
    EntityFactory();
    
    EntityFactory(EntityFactory const&) = delete;
    void operator=(EntityFactory const&) = delete;
};

#endif // !ENTITY_FACTORY
