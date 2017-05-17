#include"Ranger.h"

Ranger::Ranger()
{
}
Ranger::~Ranger()
{
}

std::string Ranger::attack()
{
	unsigned int size = _rangers.size();

	if (_rangers.size() > 0)
	{
		for (unsigned int i = 0; i < size; i++)
		{
			std::cout << std::endl << _rangers[i]->getName() << " shoots his arrows!"<< std::endl;
		}
	}
	return "attack done";
}

void Ranger::makeHero(std::string name)
{
	auto ranger = std::make_shared<Hero>(name);
	_rangers.push_back(ranger);
}

std::string Ranger::getHeroList()
{
	std::string output = std::to_string(_rangers.size());
	return output;
}