#include"Mage.h"

Mage::Mage()
{
}

Mage::~Mage()
{
}

std::string Mage::attack()
{
	unsigned int size = _mages.size();

	if (_mages.size() > 0)
	{
		for (unsigned int i = 0; i < size; i++)
		{
			std::cout << std::endl << _mages[i]->getName() << " launches fire ball!" << std::endl;
		}
	}
	return "attack done";
}

void Mage::makeHero(std::string name)
{
	auto mage = std::make_shared<Hero>(name);
	_mages.push_back(mage);
}

std::string Mage::getHeroList()
{
	std::string output = std::to_string(_mages.size());
	return output;
}