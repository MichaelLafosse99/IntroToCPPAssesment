#include <iostream>
#include <cstdlib>
#include<time.h>

int main()
{
	srand(time(NULL));
	int rand();
	int randNum;
	int input = 0;
	int newNum;

	randNum = rand() % 100 + 1;
	

	std::cout << "Think of a number between 1-100.." << std::endl;
	

	while (true)
	{

		std::cout << randNum << std::endl;
		std::cout << "Is this your number?" << std::endl;
		std::cout << "Enter 1 for less than, 2 for greater than," << std::endl;
		std::cout << "3 for the number is correct." << std::endl;
		std::cin >> input;
		{
			if (input == 1)
			{
				randNum -= 10;
			}
			if (input == 2)
			{
				randNum += 7;
			}
			if (input == 3)
			{
				std::cout << "Thanks for playing" << std::endl;
				break;
			}
		}
	}
	
	system("pause");
}