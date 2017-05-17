#pragma once
#ifndef HERO_H
#define HERO_H
#include<string>
#include<iostream>
#include<memory>
#include<vector>



class Hero
{
public:
	Hero();
	Hero(std::string);
	~Hero();

	std::string getName() const;
	void setName(std::string);
	virtual std::string attack();
	virtual void makeHero(std::string name);
	virtual std::string getHeroList();


protected:
	std::string newName;
private:
	
};

#endif // HERO_H