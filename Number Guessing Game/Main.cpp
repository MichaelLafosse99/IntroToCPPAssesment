#include <iostream>
#include <cstdlib>
#include<time.h>

int main()
{
	srand(time(NULL));
	int rand();
	int randNum;
	int input = 0;
	const int min = 1;
	const int max = 100;
	int prevMinNum = 0;
	int prevMaxNum = 0;

	randNum = rand() % 100 + 1;
	

	std::cout << "Think of a number between 1-100.." << std::endl;
	

	while (true)
	{
		std::cout << randNum << std::endl;
		if (randNum > max || randNum < min)
		{
			std::cout << "Sorry I guessed a number that wasn't between " << min << " and " << max << std::endl;
		}
		std::cout << "Is this your number?" << std::endl;
		std::cout << "Enter 1 for less than, 2 for greater than," << std::endl;
		std::cout << "3 for the number is correct." << std::endl;
		std::cin >> input;

		{
			if (input == 1)
			{
				prevMaxNum = randNum;

				randNum = rand() % (prevMaxNum - prevMinNum) + prevMinNum;
				if (randNum == prevMinNum)
				{
					randNum++;
				}
			}
			else if (input == 2)
			{
				prevMinNum = randNum;
				
				randNum = rand() % (prevMaxNum - prevMinNum) + prevMinNum;
				if (randNum == prevMinNum)
				{
					randNum++;
				}
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