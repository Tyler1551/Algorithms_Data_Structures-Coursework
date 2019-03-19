#include <stdio.h>
void init_board()
{
	int board [3][3] = {
		{7, 8, 9},
		{4, 5, 6},
		{1, 2, 3}
	};

	for(int row = 0; row < 3; row++)
	{
		for(int col = 0; col < 3; col++)
		{
			printf("|%d|", board[row][col]);
		}
		printf("\n");
	}	
}

int main(int argc, char const *argv[])
{
	printf("Welcome to naughts and crosses!\nTo play choose a position on the grid using the numpad\n\n");
	init_board();

	return 0;
}