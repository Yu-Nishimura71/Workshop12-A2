
#include "Workshop12-A2.h"
#include "EntityFactory.h"
#include <string>

int main()
{
	
	std::string type = "Herbivore";
	auto animal = EntityFactory::getInstance().makeAnimal(type);
	
	std::cout << "I am cateogory of type " << animal->getType() << ".\nAnimal: " << animal->getName() << std::endl;
	
	delete animal;
	animal = nullptr;
	return 0;
}
