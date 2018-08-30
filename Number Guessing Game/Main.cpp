#include <iostream>
#include <cstdlib>

int main()
{
	int rand();
	int guess;
	char reply;
	char input;

	guess = rand() % 100 + 1;

	std::cout << "Think of a number between 1-100.." << std::endl;

	std::cout << rand() % 100 + 1 << std::endl;
	std::cout << "Is this your number? Enter 'Y' for yes and 'N' for no." << std::endl;
	std::cin >> reply;

	if (reply == 'Y' || reply == 'y')
	{
		reply = true;
		std::cout << "Thanks for playing" << std::endl;
	}
	else if (reply == 'N' || reply == 'n')
	{
		reply = false;
	}

	while (reply == false)
	{
		std::cout << "Is your number greater than or less than the guessed number?" << std::endl;
		std::cout << "Enter 1 for greater than or 2 for less than." << std::endl;
		std::cin >> input;

		if (input = 1)
		{
			std::cout << rand() % 100 + 1 / 2 << std::endl;
		}

	}
	system("pause");
}