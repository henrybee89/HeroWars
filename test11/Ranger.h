#pragma once
#ifndef RANGER_H
#define RANGER_H
#include"Hero.h"
#include<string>
#include<iostream>

class Ranger : public Hero
{
public:
	Ranger();
	~Ranger();
	Ranger(std::string name) : Hero(name) {}

	std::string attack();
	void makeHero(std::string name);
	std::string getHeroList();

protected:
	std::vector<std::shared_ptr<Hero>> _rangers;
private:
};

#endif // !RANGER_H