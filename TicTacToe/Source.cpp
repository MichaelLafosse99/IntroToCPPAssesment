#include <iostream>

int main()
{
	int player(1);
	int input;

	char grid[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };	

	bool gameOver = true;

	std::cout << "Welcome. This is my game of TicTacToe." << std::endl;

	std::cout << std::endl;

	std::cout << "Pick a player: " << std::endl;

	std::cout << std::endl;

	std::cout << " |Player 1|  |Player 2| " << std::endl;
	std::cin >> input;
	std::cout << std::endl;

	if (input == 1)
	{
		do {

			bool validTurn;

			std::cout << "		" << grid[0][0] << " | " << grid[0][1] << " | " << grid[0][2] << std::endl;
			std::cout << "	       ---|---|---" << std::endl;
			std::cout << "		" << grid[0][3] << " | " << grid[0][4] << " | " << grid[0][5] << std::endl;
			std::cout << "	       ---|---|---" << std::endl;
			std::cout << "		" << grid[0][6] << " | " << grid[0][7] << " | " << grid[0][8] << std::endl;

			char token;
			if (player = 1)
			{
				token = 'X';
			}
			else
			{
				token = 'O';
			}

			do {

				char currentPlay;
				 
				std::cout << "Player " << player << ", where do you want to put your token?" << std::endl;
				std::cin >> currentPlay;
				std::cout << std::endl;
				validTurn = true;
				int row, col;

				if (currentPlay == '1')
					row = col = 0;
				else if (currentPlay == '2')
				{
					row = 0; col = 1;
				}
				else if (currentPlay == '3')
				{
					row = 0; col = 2;
				}
				else if (currentPlay == '4')
				{
					row = 0; col = 3;
				}
				else if (currentPlay == '5')
				{
					row = 0; col = 4;
				}
				else if (currentPlay == '6')
				{
					row = 0; col = 5;
				}
				else if (currentPlay == '7')
				{
					row = 0; col = 6;
				}
				else if (currentPlay == '8')
				{
					row = 0; col = 7;
				}
				else if (currentPlay == '9')
				{
					row = 0; col = 8;
				}

				if (grid[row][col] != 'X' && grid[row][col] != 'O')
				{
					grid[row][col] = token;
				}
				else
				{
					std::cout << "That's already an occupied spot.. Pick another one." << std::endl;
					std::cout << std::endl;
				}

			} while (!validTurn);

			gameOver = false;

			bool win = true;




		} while (!gameOver);

	}
	system("pause");
}