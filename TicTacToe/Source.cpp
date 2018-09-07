#include <iostream>

int main()
{
	int player(1);


	char grid[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };	

	bool gameOver = true;

	std::cout << "Welcome. This is my game of Tic-Tac-Toe." << std::endl;

	std::cout << std::endl;

	std::cout << "This is what the grid looks like, you'll have to pick a number 1-9" << std::endl;
	std::cout << "after choosing which player you are." << std::endl;

	std::cout << std::endl;
	char token = 'X';

		do {

			bool validTurn;

			//The grid for the game
			std::cout << "		" << grid[0][0] << " | " << grid[0][1] << " | " << grid[0][2] << std::endl;
			std::cout << "	       ---|---|---" << std::endl;
			std::cout << "		" << grid[0][3] << " | " << grid[0][4] << " | " << grid[0][5] << std::endl;
			std::cout << "	       ---|---|---" << std::endl;
			std::cout << "		" << grid[0][6] << " | " << grid[0][7] << " | " << grid[0][8] << std::endl;

			//Setting player one is X and Two is O
			

			do {
					
				char currentPlay;

					std::cout << token <<" Choose where to place your token, 1-9" << std::endl;
					std::cin >> currentPlay;
					std::cout << std::endl;

				//Checks each slot on the grid, if empty, places X, if occupied prompts issue and tells user to place again.
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
				if (token == 'X')
				{
					token = 'O';
				}
				else
				{
					token = 'X';
				}
			} while (!validTurn);

			gameOver = false;

			bool win = true;

		} while (!gameOver);

	
	system("pause");
}