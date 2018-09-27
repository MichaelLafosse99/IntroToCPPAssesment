#include "Game.h"
#include "Hero.h"

Hero Game::Battle(Hero & hero1, Hero & hero2)
{
	while (hero1.IsAlive() && hero2.IsAlive())
	{
		hero1.Fight(hero2);
		//If hero2 is alive it prints out the following:
		if (hero2.IsAlive() == false && hero1.IsAlive())
		{
			//A function to display both teams during the game
			DisplayTeams();

			std::cout << "+==================+==================+" << std::endl;
			hero2.PrintName();
			std::cout << " has been defeated!" << std::endl;
			std::cout << std::endl;
			hero1.PrintName();
			std::cout << " is the winner!" << std::endl;
			std::cout << "+==================+==================+" << std::endl;

			system("pause");
			system("cls");
			return hero1;
		}

		hero2.Fight(hero1);
		//If hero1 is alive it prints out the following:
		if (hero1.IsAlive() == false && hero2.IsAlive())
		{
			DisplayTeams();

			std::cout << "+==================+==================+" << std::endl;
			hero1.PrintName();
			std::cout << " has been defeated!" << std::endl;
			std::cout << std::endl;
			hero2.PrintName();
			std::cout << " is the winner!" << std::endl;
			std::cout << "+==================+==================+" << std::endl;

			system("pause");
			system("cls");
			return hero2;
		}
	}
		return Hero();
}

void Game::DisplayTeams()
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
