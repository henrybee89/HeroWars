#pragma once
#ifndef WARRIOR_H
#define WARRIOR_H
#include"Hero.h"
#include<string>

class Warrior : public Hero
{
public:
	Warrior();
	~Warrior();
	Warrior(std::string name) : Hero(name) {}

	std::string attack();
	void makeHero(std::string name);
	std::string getHeroList();

protected:
	std::vector<std::shared_ptr<Hero>> _warriors;
private:
};

#endif // !WARRIOR_H