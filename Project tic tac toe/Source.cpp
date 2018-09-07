#include <iostream>


int main()
{
	char board[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			board[i][j] = ' ';
	}
	char input;
	char token = 'x';
	std::cout << "     " << board[0][0] << "|    " << board[0][1] << "|" << board[0][2] << std::endl;
	std::cout << " -----|-----|-----" << std::endl;
	std::cout << "     " << board[0][3] << "|    " << board[0][4] << "|" << board[0][5] << std::endl;
	std::cout << " -----|-----|-----" << std::endl;
	std::cout << "     " << board[0][6] << "|    " << board[0][7] << "|" << board[0][8] << std::endl;

	char

	

	system("pause");
} 
  