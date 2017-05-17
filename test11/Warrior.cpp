#include"Warrior.h"

Warrior::Warrior()
{
}

Warrior::~Warrior()
{
}

std::string Warrior::attack()
{
	unsigned int size = _warriors.size();

	if (_warriors.size() > 0)
	{
		for (unsigned int i = 0; i < size; i++)
		{
			std::cout << std::endl << _warriors[i]->getName() << " slashes with his mighty sword!" << std::endl;
			
		}
	}
	return "attack done";
}

void Warrior::makeHero(std::string name)
{
	auto warrior = std::make_shared<Hero>(name);
	_warriors.push_back(warrior);
}

std::string Warrior::getHeroList()
{
	std::string output = std::to_string(_warriors.size());
	return output;
}