#include <iostream>
#include<vector>
#include<string>
#include<memory>
#include"Hero.h"
#include"Guild.h"
#include"Mage.h"
#include"Warrior.h"
#include"Paladin.h"
#include"Ranger.h"

using namespace std;

void addHeros(const shared_ptr<Hero> mage, shared_ptr<Hero> warrior, shared_ptr<Hero> paladin, shared_ptr<Hero> ranger);
void printHeros(const shared_ptr<Hero> mage, shared_ptr<Hero> warrior, shared_ptr<Hero> paladin, shared_ptr<Hero> ranger);
void gameMainMenu(const shared_ptr<Hero> mage, shared_ptr<Hero> warrior, shared_ptr<Hero> paladin, shared_ptr<Hero> ranger, shared_ptr<Guild> guild);
void attackPage(const shared_ptr<Hero> mage, shared_ptr<Hero> warrior, shared_ptr<Hero> paladin, shared_ptr<Hero> ranger);

int main()
{
	
	string name = "null";

	shared_ptr<Hero> mage = make_shared<Mage>(name);
	shared_ptr<Hero> warrior = make_shared<Warrior>(name);
	shared_ptr<Hero> paladin = make_shared<Paladin>(name);
	shared_ptr<Hero> ranger = make_shared<Ranger>(name);
	
	auto guild = make_shared<Guild>(name);

	gameMainMenu(mage, warrior, paladin, ranger, guild);

	return 0;
}

void addHeros(const shared_ptr<Hero> mage, shared_ptr<Hero> warrior, shared_ptr<Hero> paladin, shared_ptr<Hero> ranger)
{
	string name;
	
	cout << "What is your Hero's name: ";
	cin >> name;
	cout << endl;
	
	int choice = -1;

		system("cls");

		cout << "What class will your hero be: " << endl;
		cout << "1) Mage" << endl;
		cout << "2) Warrior" << endl;
		cout << "3) Paladin" << endl;
		cout << "4) Ranger" << endl;

		cin >> choice;

		switch (choice)
		{
		case 1: mage->setName(name); mage->makeHero(name); break;
		case 2: warrior->setName(name); warrior->makeHero(name); break;
		case 3: paladin->setName(name); paladin->makeHero(name); break;
		case 4: ranger->setName(name); ranger->makeHero(name); break;
		default:"wrong!";
			break;
		}
}

void printHeros(const shared_ptr<Hero> mage, shared_ptr<Hero> warrior, shared_ptr<Hero> paladin, shared_ptr<Hero> ranger)
{
	system("cls");

	cout << "You have "<< mage->getHeroList() << " Mages in your guild" <<endl;
	cout << "You hve " << warrior->getHeroList() << " Warriors in your guild" << endl;
	cout << "You have " << paladin->getHeroList() << " Paladins in your guild" << endl;
	cout << "You have " << ranger->getHeroList() << " Rangers in your guild" << endl;
	system("pause");
	
}

void gameMainMenu(const shared_ptr<Hero> mage, shared_ptr<Hero> warrior, shared_ptr<Hero> paladin, shared_ptr<Hero> ranger, shared_ptr<Guild> guild)
{

	cout << "Welcome to guild wars please enter the name of your guild: ";

	string name;
	getline(cin, name);
	guild->setName(name);

	int choice = -1;

	while (choice != 0)
	{
		system("cls");
		cout << "Now managing " << guild->getName() << endl;
		cout << "What would you like to" << endl;
		cout << "1) Display Guild Info" << endl;
		cout << "2) Add Hero to Guild" << endl;
		cout << "3) Attack with Guild" << endl;
		cout << "4) Quit game" << endl;
		
		cin >> choice;

		switch (choice)
		{
		case 1: printHeros(mage,warrior, paladin, ranger); break;
		case 2: addHeros(mage,warrior, paladin, ranger); break;
		case 3: attackPage(mage, warrior, paladin, ranger); break;
		case 4: choice = 0; break;
		default: "wrong!"; break;
		}
	}
}

void attackPage(const shared_ptr<Hero> mage, shared_ptr<Hero> warrior, shared_ptr<Hero> paladin, shared_ptr<Hero> ranger)
{
	
	system("cls");

	cout << "What would you like to do?" << endl;
	cout << "1) Attack with mages!" << endl;
	cout << "2) Attack with warriors!" << endl;
	cout << "3) Attack with paladins!" << endl;
	cout << "4) Attack with rangers!" << endl;
	cout << "5) Attack with all!" << endl;

	int choice = -1;
	cin >> choice;

	switch (choice)
	{
	case 1: cout << mage->attack(); break;
	case 2: cout << warrior->attack(); break;
	case 3: cout << paladin->attack(); break;
	case 4: cout << ranger->attack(); break;
	case 5: cout << mage->attack() << endl << warrior->attack() << endl << paladin->attack() << endl << ranger->attack() << endl; break;
	default:"wrong!";
		break;
	}

	system("pause");

}