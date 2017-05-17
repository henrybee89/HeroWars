#include"Paladin.h"

Paladin::Paladin()
{
}

Paladin::~Paladin()
{
}

std::string Paladin::attack()
{
	unsigned int size = _Paladins.size();

	if (_Paladins.size() > 0)
	{
		for (unsigned int i = 0; i < size; i++)
		{
			std::cout << std::endl << _Paladins[i]->getName() << " swings his holy hammer!" << std::endl;
		}
	}
	return "attack done";
}

void Paladin::makeHero(std::string name)
{
	auto paladin = std::make_shared<Hero>(name);
	_Paladins.push_back(paladin);
}

std::string Paladin::getHeroList()
{
	std::string output = std::to_string(_Paladins.size());
	return output;
}