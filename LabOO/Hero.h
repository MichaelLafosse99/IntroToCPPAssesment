#pragma once
#include <iostream>
#include <cstdlib>
#include <time.h>

class Hero
{
private:
	int mHealth;
	int mAttack;
	const char* mName;
	const char* mNameAttack;

public:
	//Required:
	void Fight(Hero&);
	bool IsAlive();
	void TakeDamage(int amountD);

	//Added:
	void ChangeHeroName(const char* name);
	Hero();
	Hero(const char* name);
	void ChangeAttackName();
	void PrintName();
	void PrintAttack();
	void PrintDamage();
	void PrintCurrentHealth();
	int GetHealth();
	void DisplayTeams();

	//Operators:
	bool operator != (const Hero& otherHero);
	bool operator < (const Hero& otherHero);
};