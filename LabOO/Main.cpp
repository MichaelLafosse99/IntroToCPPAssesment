#include "Game.h" 

int main()
{
	srand(time(0));
	int numHeroes = 12;
	int randHero;

	std::cout << "Incoming signal..." << "\a" << std::endl;
	std::cout << std::endl;
	std::cout << "A fight has broken out between the heroes of our nation...." << std::endl;
	std::cout << "To resolve their issues and save mankind, they must fight TO THE DEATH!" << std::endl;
	std::cout << "Press 'ENTER' to see them fight." << std::endl;
	std::cout << std::endl;
	system("pause");
	system("cls");

	//This is what makes the new heroes, assigning their names.
	//It is a pointer of everyHero pointing to a collector which is
	//new Hero[numHeroes]()
	Hero* everyHero = new Hero[numHeroes]();
	Hero* iterate = &everyHero[0];

	//Both teams.
	Stack Team1;
	Stack Team2;

	//Actually assigning the heroes their names, and which team they are apart of:

	//Team1
	iterate->ChangeHeroName("Ironman");
	Team1.Push(iterate++);
	iterate->ChangeHeroName("Spider-Man");
	Team1.Push(iterate++);
	iterate->ChangeHeroName("Thor");
	Team1.Push(iterate++);
	iterate->ChangeHeroName("Groot");
	Team1.Push(iterate++);
	iterate->ChangeHeroName("Doctor Strange");
	Team1.Push(iterate++);
	iterate->ChangeHeroName("Black Widow");
	Team1.Push(iterate++);

	//Team2
	iterate->ChangeHeroName("Captain America");
	Team2.Push(iterate++);
	iterate->ChangeHeroName("Deadpool");
	Team2.Push(iterate++);
	iterate->ChangeHeroName("Luke Cage");
	Team2.Push(iterate++);
	iterate->ChangeHeroName("The Punisher");
	Team2.Push(iterate++);
	iterate->ChangeHeroName("Daredevil");
	Team2.Push(iterate++);
	iterate->ChangeHeroName("Hulk");
	Team2.Push(iterate++);

	Game CivilWar;

	while (Team1.TeamIsDead() == false && Team2.TeamIsDead() == false)
	{
		
		//The rand functions choose random hero from the
		//number of heroes on that particular team
		int randHeroA = rand() % Team1.Count();
		int randHeroB = rand() % Team2.Count();

		//Organizing the teams:
		Team1.OrganizeHeroes();
		Team2.OrganizeHeroes();

		//This is making a random hero from team1 fight a random hero from team 2.
		Hero& team1Fighter = Team1.RandHero(randHeroA);
		Hero& team2Fighter = Team2.RandHero(randHeroB);
		CivilWar.Battle(team1Fighter, team2Fighter);

		//Popping off any dead heroes.
		Team1.Pop();
		Team2.Pop();

		if (Team1.TeamIsDead() && Team2.TeamIsDead() == false)
		{
			std::cout << "+==================+==================+" << std::endl;
			std::cout << std::endl;
			std::cout << "Team 2 Is The Winning Team!" << std::endl;
			std::cout << std::endl;
			std::cout << "+==================+==================+" << std::endl;
		}
		if (Team1.TeamIsDead() == false && Team2.TeamIsDead())
		{
			std::cout << "+==================+==================+" << std::endl;
			std::cout << std::endl;
			std::cout << "Team 1 Is The Winning Team!" << std::endl;
			std::cout << std::endl;
			std::cout << "+==================+==================+" << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "Waiting For Next Patch Release.." << std::endl;
	system("pause");

	//Test Operator

	//if (*(iterate) != *(iterate + 1))
	//{
	//	std::cout << "they not be da same";
	//}
}