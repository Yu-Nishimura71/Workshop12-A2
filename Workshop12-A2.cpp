
#include "Workshop12-A2.h"
#include "EntityFactory.h"
#include <string>
#include "Entity.h"
using namespace std;

int main()
{
	std::string type = "Herbivore";

	auto a = EntityFactory::getInstance().makeAnimal(type);
	/*Entity* herbivore = eFactory.makeAnimal(type);*/
	return 0;
}
