
#include "Workshop12-A2.h"
#include "EntityFactory.h"
#include <string>
using namespace std;

int main()
{
	std::string type = "Herbivore";
	auto eFactory = EntityFactory::getInstance().makeAnimal(type);
	

	return 0;
}
