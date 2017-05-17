#pragma once
#ifndef PALADIN_H
#define PALADIN_H
#include"Hero.h"
#include<string>

class Paladin : public Hero
{
public:
	Paladin();
	~Paladin();
	Paladin(std::string name) : Hero(name) {}

	std::string attack();
	void makeHero(std::string name);
	std::string getHeroList();

protected:
	std::vector<std::shared_ptr<Hero>> _Paladins;
private:
};

#endif // !PALADIN_H