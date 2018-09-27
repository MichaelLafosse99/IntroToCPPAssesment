#include "Hero.h"

//function that makes a hero take damage with calling another functio
void Hero::Fight(Hero & hero)
{	
	DisplayTeams();

	std::cout << std::endl;
	std::cout << "+==================+==================+" << std::endl;
	std::cout << "	    The Battle:" << std::endl;
	std::cout << std::endl;

	//Chaning Attack Name & Attack Value:
	ChangeAttackName();

	//Printing Hero's Name:
	PrintName();
	std::cout << " ";

	//Prints Hero's Attack Name:
	PrintAttack();
	std::cout << " ";

	//Prints the hero being attacked:
	hero.PrintName();
	hero.TakeDamage(mAttack);
	std::cout << std::endl;
	std::cout << std::endl;

	//Prints amount of damage done:
	PrintDamage();
	std::cout << std::endl;
	std::cout << std::endl;

	//Prints hero taking the damage's health:
	hero.PrintCurrentHealth();
	std::cout << std::endl;
	std::cout << "+==================+==================+" << std::endl;
	std::cout << std::endl;
	
	system("pause");
	system("cls");
}

//Function to check if hero's health is greater than 0.
bool Hero::IsAlive()
{
	return (mHealth > 0);
}

//Deals damage to a hero.
void Hero::TakeDamage(int amountD)
{
	mHealth -= amountD;
}

//Prints out a hero's name.
void Hero::PrintName()
{
	std::cout << (char*) mName;
}

//Prints out a hero's attack name, depending on their attack number.
void Hero::PrintAttack()
{
	std::cout << (char*)mNameAttack;
}

//Displays the damage done to a hero.
void Hero::PrintDamage()
{
	std::cout << "Damage Done: " << " " << mAttack;
}

//Displays the hero's (who was just damaged) current health.
void Hero::PrintCurrentHealth()
{
	PrintName();
	std::cout << "'s Current Health: " << mHealth;
}

//This function returns the mHealth of a hero.
int Hero::GetHealth()
{
	return mHealth;
}

//Operators
bool Hero::operator != (const Hero & otherHero)
{
	return this->mHealth == otherHero.mHealth && this->mAttack != otherHero.mAttack;
}
bool Hero::operator < (const Hero & otherHero)
{
	return this->mHealth < otherHero.mHealth;
}

//Both of these contain what each hero has:
//They work together, one sets the name as a const char*
//The other is used in the main.cpp, as a collector.
Hero::Hero()
{
	mNameAttack = new char[255];
	mName = new char[255];
	mHealth = 100;
	ChangeAttackName();
}

Hero::Hero(const char * name)
{
	mNameAttack = new char[255];
	mName = new char[255];
	mHealth = 100;
	mName = name;
	ChangeAttackName();
}

//Changes the attack power, and name based on that power.
void Hero::ChangeAttackName()
{
	
	mAttack = rand() % 101;

	if (mAttack <= 10)
	{
		mNameAttack = "Grazed";
	}
	if (mAttack > 10 && mAttack <= 20)
	{
		mNameAttack = "Uppercut";
	}
	if (mAttack > 20 && mAttack <= 40)
	{
		mNameAttack = "Blasted";
	}
	if (mAttack > 40 && mAttack <= 60)
	{
		mNameAttack = "Spartan Kicked";
	}
	if (mAttack > 60 && mAttack <= 80)
	{
		mNameAttack = "Threw Debris At";
	}
	if (mAttack > 80 && mAttack <= 99)
	{
		mNameAttack = "Body Slammed";
	}
	if (mAttack == 100)
	{
		mNameAttack = "F@#*ED UP";
	}
}

//Changes Hero Name
void Hero::ChangeHeroName(const char* name)
{
	mName = name;
}

//This is what displays the two teams throught the game
void Hero::DisplayTeams()
{
	std::cout << "+==================+==================+" << std::endl;
	std::cout << "	    Teams:" << std::endl;
	std::cout << "Team 1:" << "			" << "Team 2:" << std::endl;
	std::cout << "-------" << "			" << "-------" << std::endl;
	std::cout << std::endl;
	std::cout << "Ironman" << "			" << "Captain America" << std::endl;
	std::cout << "Spider-Man" << "		" << "Deadpool" << std::endl;
	std::cout << "Thor" << "			" << "Luke Cage" << std::endl;
	std::cout << "Groot" << "			" << "The Punisher" << std::endl;
	std::cout << "Doctor Strange" << "		Daredevil" << std::endl;
	std::cout << "Black Widow" << "		Hulk" << std::endl;
	std::cout << "+==================+==================+" << std::endl;
	std::cout << std::endl;
}