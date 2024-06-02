#ifndef HUMAN_H
#define HUMAN_H

#include "Entity.h"
#include <string>

class Human : public Entity {
public:
    Human(std::string _name) {
    
        name = _name;

    }
    virtual ~Human(){}
    std::string getType() override;
    std::string getName() override;


private:
    std::string name;
};
#endif // !HUMAN_H
