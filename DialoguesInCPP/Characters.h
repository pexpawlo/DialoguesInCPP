#pragma once
#include <string>
#include<iostream>
using namespace std;

 class Character
{
protected:
	unsigned int ID;
	string name;
	unsigned int healthPoints;
	unsigned int gold;
	Character::Character(unsigned int ID, string name, unsigned int healthPoints, unsigned int gold)
		:ID(ID),name(name),healthPoints(healthPoints),gold(gold)
	{
		cout << name << " was created, ID=" << ID;
	}
	
};

 class Hero: public Character
 {
 protected:
	 unsigned int strength;
	 unsigned int intelligence;	
 public:
	 Hero::Hero(unsigned int ID, string name, unsigned int healthPoints, unsigned int gold, unsigned int strength, unsigned int intelligence)
		 :Character(ID, name, healthPoints, gold),strength(strength),intelligence(intelligence)
	{
		 cout <<" this is playable hero!" << "\n";
	}
 };

 class NPC: public Character
 {
 protected:
	short int relationToHero;
 public:
	 NPC::NPC(unsigned int ID, string name, unsigned int healthPoints, unsigned int gold, short int relationToHero)
		 :Character(ID, name, healthPoints, gold), relationToHero(relationToHero)
	 {
		 cout << " this is NPC" << "\n";
	 }

 };

 void initExampleCharacters()
 {
	 cout << "Characters creation:\n" << endl;
	 Hero myHero(0, "John", 10, 5, 3, 3);
	 NPC Chris(1, "Chris", 10, 25, 0);
	 NPC Frank(2, "Frank", 10, 15, 0);
	 NPC Jenny(3, "Jenny", 10, 20, 0);
 }


