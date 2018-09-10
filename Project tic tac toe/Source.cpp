#include <iostream>

int main()
{
	char board[3][3] = { { ' ', ' ', ' '}, { ' ', ' ', ' '}, {' ', ' ', ' '} };
	char item;
	int place = 0;
	int Column = 0;
	int Row = 0;



	std::cout << "Welcome to TicTacToe, Please use number to place a piece, P1 - X's and P2 O's" << std::endl;
	system("pause");
	system("cls");

	for (int i = 0; i < 9; i++)
	{

		item = (i % 2 == 0) ? 'X' : 'O';
		std::cout << item << "'s turn";

		while (i < 9)
		{
			std::cin >> place;

			Column = (place - 1) / 3;
			Row = ((place + 2) % 3);

			if (board[Column][Row] != ' ')
			{
				std::cout << "This Space Has Been Use Already." << std::endl;
			}

			else
			{
				break;
			}
		}

		Column = (place - 1) / 3;
		Row = ((place + 2) % 3);
		board[Column][Row] = item;

		for (int j = 2; j >= 0; j--)
		{
			for (int m = 0; m <= 2; m++)
			{
				std::cout << "|_" << board[j][m] << "_|";

				if (6 % (m + 3) == 1)
				{
					std::cout << std::endl;
				}
			}
		}

		if (board[0][0] == board[1][0] && board[2][0] == board[1][0] && board[0][0] != ' ')
		{
			std::cout << board[0][0] << " You've Won " << std::endl;
			break;
		}

		else if (board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][0] != ' ')
		{
			std::cout << board[0][0] << " You've Won " << std::endl;
			break;
		}

		else if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		{
			std::cout << board[0][0] << " You've Won " << std::endl;
			break;
		}

		else if (board[0][1] == board[1][1] && board[1][1] == board[2][1] && board[0][1] != ' ')
		{
			std::cout << board[0][1] << " You've Won " << std::endl;
			break;
		}

		else if (board[0][2] == board[1][2] && board[1][2] == board[2][2] && board[0][2] != ' ')
		{
			std::cout << board[0][2] << " You've Won " << std::endl;
			break;
		}

		else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		{
			std::cout << board[0][2] << " You've Won " << std::endl;
			break;
		}

		else if (board[1][0] == board[1][1] && board[1][1] == board[1][2] && board[1][0] != ' ')
		{
			std::cout << board[1][0] << " You've Won " << std::endl;
			break;
		}

		else if (board[2][0] == board[2][1] && board[2][1] == board[2][2] && board[2][0] != ' ')
		{
			std::cout << board[2][0] << " You've Won " << std::endl;
			break;
		}

		if (i != 8)
		{
			system("pause");
			system("cls");
			continue;
		}

		else
		{
			std::cout << "It's a Tie" << std::endl;
			break;
		}
	}

	system("pause");
	return 0;
}
