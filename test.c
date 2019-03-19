#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("Welcome to naughts and crosses!\nTo play choose a position on the grid using the numpad\n\n");

	char board [3][3] = {
		board[0][0] = 7, board[0][1] = 8, board[0][2] = 9,
		board[1][0] = 4, board[1][1] = 5, board[1][2] = 6,
		board[2][0] = 1, board[2][1] = 2, board[2][2] = 3
	};

	for(int row = 0; row < 3; row++)
	{
		for(int col = 0; col < 3; col++)
		{
			printf("|%c|", board[row][col]);
		}
		printf("\n");
	}	

	return 0;
}