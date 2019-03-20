#include <stdio.h>

typedef enum { false, true } bool;

//shows intial board with positions labelled
void init_board()
{
	char board [3][3] = {
		board[0][0] = 7, board[0][1] = 8, board[0][2] = 9,
		board[1][0] = 4, board[1][1] = 5, board[1][2] = 6,
		board[2][0] = 1, board[2][1] = 2, board[2][2] = 3	
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

//shows game board that the user makes moves on
void display_board(char game_board[3][3])
{
	printf("\n\n");

	for(int row = 0; row < 3; row++)
	{
		for(int col = 0; col < 3; col++)
		{
			printf("| %c |", game_board[row][col]);
		}
		printf("\n");
	}
}

//sets all positons to blank
void init_game_board(char game_board[3][3])
{
	for(int row = 0; row < 3; row++)
	{
		for(int col = 0; col < 3; col++)
		{
			game_board[row][col] = 0;
		}
	}
}

void insert(char game_board, int pos, char symbol)
{
	
}

int main(int argc, char const *argv[])
{
	printf("\t\t\t\tWelcome to naughts and crosses!\n\t\t\tTo play choose a position on the grid using the numpad\n\t\tThe first grid shown lists the positions of the grid to play\n\n");
	init_board();
	char game_board [3][3];
	init_game_board(game_board);
	display_board(game_board);
	insert(game_board, 8, 'X');


	return 0;
}