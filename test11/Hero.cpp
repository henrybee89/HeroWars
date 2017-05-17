#include "Hero.h"

Hero::Hero()
{
	//ctor
}

Hero::Hero(std::string name)
{
	newName = name;
}

Hero::~Hero()
{
	//dtor
}

std::string Hero::getName() const
{
	return newName;
}

void Hero::setName(std::string name)
{
	newName = name;
}

std::string Hero::attack()
{
	return "Null Attack";
}

void Hero::makeHero(std::string name)
{
}

std::string Hero::getHeroList()
{
	std::string output = "null";
	return output;
}
