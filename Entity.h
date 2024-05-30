#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Entity {
public:
    Entity() {}
    virtual ~Entity() {}
    virtual std::string getType() = 0;
    virtual std::string getName() = 0;
protected:
    double _x = 0;
    double _y = 0;
};
#endif // !ENTITY_H
