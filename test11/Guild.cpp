#include "Guild.h"

Guild::Guild()
{
	//ctor
}
Guild::~Guild()
{
	//ctor
}

Guild::Guild(std::string name)
{
	newName = name;
}

std::string Guild::getName() const
{
	return newName;
}

void Guild::setName(std::string name)
{
	newName = name;
}
