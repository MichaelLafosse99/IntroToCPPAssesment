#include <iostream>

int main()
{
	int player(1);


	char grid[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };	

	bool gameOver = true;

	std::cout << "Welcome.. This is my game of Tic-Tac-Toe." << std::endl;
	std::cout << std::endl;

	system("pause");
	system("cls");

	std::cout << "Rules: " << std::endl;
	std::cout << std::endl;
	std::cout << "1.) A player must have three tokens placed in a row to win." << std::endl;
	std::cout << "2.) You are not allowed to place a token more than once per turn." << std::endl;
	std::cout << "3.) You can not place a token in an occupied spot." << std::endl;
	std::cout << "4.) If neither player places three tokens in a row, it's a tie." << std::endl;
	std::cout << std::endl;

	system("pause");
	system("cls");

	std::cout << "This is what the board looks like, numbers 1-9 represent a spot on the board" << std::endl;
	std::cout << "where you can place a token." << std::endl;
	std::cout << std::endl;

	std::cout << "		" << grid[0][0] << " | " << grid[0][1] << " | " << grid[0][2] << std::endl;
	std::cout << "	       ---|---|---" << std::endl;
	std::cout << "		" << grid[0][3] << " | " << grid[0][4] << " | " << grid[0][5] << std::endl;
	std::cout << "	       ---|---|---" << std::endl;
	std::cout << "		" << grid[0][6] << " | " << grid[0][7] << " | " << grid[0][8] << std::endl;
	std::cout << std::endl;

	std::cout << "The game begins after this point.." << std::endl;
	std::cout << std::endl;

	system("pause");
	system("cls");

	//Pre-defining the tokens assinged value, and changing it later

	char token = 'X';

		do {

			bool validTurn;

			std::cout << "Current Turn: " << token << std::endl;
			std::cout << std::endl;

			//The grid for the game

			std::cout << "		" << grid[0][0] << " | " << grid[0][1] << " | " << grid[0][2] << std::endl;
			std::cout << "	       ---|---|---" << std::endl;
			std::cout << "		" << grid[0][3] << " | " << grid[0][4] << " | " << grid[0][5] << std::endl;
			std::cout << "	       ---|---|---" << std::endl;
			std::cout << "		" << grid[0][6] << " | " << grid[0][7] << " | " << grid[0][8] << std::endl;
			std::cout << std::endl;

			do {
					
				char currentPlay;

				std::cout << "Choose a spot to place your token, 1-9. Then press ENTER to place the token." << std::endl;
				std::cin >> currentPlay;
				std::cout << std::endl;

				//Clears code (only keeping one grid, instead of printing one per turn)
				system("cls");

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
					//Makes sure the player, who is prompted the occupied spot message, gets to replace their token.
					if (token == 'X')
					{
						token = 'O';
					}
					else
					{
						token = 'X';
					}

					std::cout << "That's already an occupied spot.. Pick another one." << std::endl;
					std::cout << std::endl;
				}

				//Changes tokens (gives each player a turn)

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

			//Checks all winning possiblities, horizontal, vertical, and diagonal.

			if (grid[0][0] != '1')
			{
				if (grid[0][1] == grid[0][0] && grid[0][2] == grid[0][0])
				{
					gameOver = true;
				}
				if (grid[0][3] == grid[0][0] && grid[0][6] == grid[0][0])
				{
					gameOver = true;
				}
			}

			if (grid[0][0] != '9')
			{
				if (grid[0][2] == grid[0][8] && grid[0][5] == grid[0][8])
				{
					gameOver = true;
				}
				if (grid[0][6] == grid[0][8] && grid[0][7] == grid[0][8])
				{
					gameOver = true;
				}
			}

			if (grid[0][0] != '5')
			{
				if (grid[0][0] == grid[0][4] && grid[0][8] == grid[0][4])
				{
					gameOver = true;
				}
				if (grid[0][1] == grid[0][4] && grid[0][7] == grid[0][4])
				{
					gameOver = true;
				}
				if (grid[0][3] == grid[0][4] && grid[0][5] == grid[0][4])
				{
					gameOver = true;
				}
				if (grid[0][2] == grid[0][4] && grid[0][6] == grid[0][4])
				{
					gameOver = true;
				}
			}

			//If none of the tokens are 3 in a row, then it prints out tie.

			if (grid[0][0] != '1' && grid[0][1] != '2' && grid[0][2] != '3' &&
				grid[0][3] != '4' && grid[0][4] != '5' && grid[0][5] != '6' &&
				grid[0][6] != '7' && grid[0][7] != '8' && grid[0][8] != '9')
			{
				gameOver = true;
				win = false;

				std::cout << "It's a tie..." << std::endl;
				std::cout << "Thanks for playing!" << std::endl;
				std::cout << std::endl;
			}

			//If the bool statements are kept true, gameover and a player wins.

			if (gameOver)
			{
				if (win)
				{

					//Makes sure that the token is changed after last turn to print out the right winner.

					if (token == 'X')
					{
						token = 'O';
					}
					else
					{
						token = 'X';
					}

					std::cout << token << " is the winner!" << std::endl;
					std::cout << "Thanks for playing!" << std::endl;
					std::cout << std::endl;
				}

				std::cout << "		" << grid[0][0] << " | " << grid[0][1] << " | " << grid[0][2] << std::endl;
				std::cout << "	       ---|---|---" << std::endl;
				std::cout << "		" << grid[0][3] << " | " << grid[0][4] << " | " << grid[0][5] << std::endl;
				std::cout << "	       ---|---|---" << std::endl;
				std::cout << "		" << grid[0][6] << " | " << grid[0][7] << " | " << grid[0][8] << std::endl;
				std::cout << std::endl;
			}

		} while (!gameOver);

	
	system("pause");
}