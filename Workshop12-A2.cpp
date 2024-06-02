
#include "Workshop12-A2.h"
#include "EntityFactory.h"
#include <string>

int main()
{
	
	std::string type = "Herbivore";
	auto animal = EntityFactory::getInstance().makeAnimal(type);
	
	std::cout << "I am cateogory of type " << animal->getType() << ".\nAnimal: " << animal->getName() << std::endl;

	std::string name = "Ryan";
	auto human = EntityFactory::getInstance().makeHuman(name);

	std::cout << "I am a category of type " << human->getType() << ".\nHuman: " << human->getName() << std::endl;
	
	delete animal;
	delete human;
	animal = nullptr;
	human = nullptr;
	return 0;
}
