#ifndef ENTITY_FACTORY
#define ENTITY_FACTORY

#include "Entity.h"

class EntityFactory {
public:
    static EntityFactory getInstnace() {
        static EntityFactory instance;
        return instance;
    }

    // Takes param types of either Animal (e.g., lion) or type (e.g., carnivore).
    Entity* makeAnimal(Entity eType);
protected:
    EntityFactory();
    
    EntityFactory(EntityFactory const&) = delete;
    void operator=(EntityFactory const&) = delete;
};
#endif // !ENTITY_FACTORY
