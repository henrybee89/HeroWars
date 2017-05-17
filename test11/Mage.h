#pragma once
#ifndef MAGE_H
#define MAGE_H
#include"Hero.h"
#include<string>

class Mage : public Hero
{
public:
	Mage();
	~Mage();
	Mage(std::string name) : Hero(name){}

	std::string attack();
	void makeHero(std::string name);
	std::string getHeroList();

protected:
	std::vector<std::shared_ptr<Hero>> _mages;
private:
};

#endif // !MAGE_H

