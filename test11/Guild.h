#pragma once
#ifndef GUILD_H
#define GUILD_H
#include<string>


class Guild
{
public:
	Guild();
	Guild(std::string);
	~Guild();

	std::string getName() const;
	void setName(std::string);


protected:

private:
	std::string newName;
};

#endif // GUILD_H
