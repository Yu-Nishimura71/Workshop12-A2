#include "EntityFactory.h"

Entity* EntityFactory::makeEntity() {
    Entity* e = new Entity();
    return e;
}