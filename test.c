#include <stdio.h>

typedef enum { false, true } bool;

#define MAX 9

char input = 'X';

//shows intial board with positions labelled
void init_board()
{
	char board [MAX] = {1,2,3,4,5,6,7,8,9};

		printf("| %d || %d || %d |\n", board[0], board[1], board[2]);
		printf("| %d || %d || %d |\n", board[3], board[4], board[5]);
		printf("| %d || %d || %d |\n", board[6], board[7], board[8]);
}

//shows game board that the user makes moves on
void display_board(char game_board[9])
{
	printf("\n\n");

		printf("| %c || %c || %c |\n", game_board[1], game_board[2], game_board[3]);
		printf("| %c || %c || %c |\n", game_board[4], game_board[5], game_board[6]);
		printf("| %c || %c || %c |\n", game_board[7], game_board[8], game_board[9]);
}

//sets all positons to blank
void init_game_board(char game_board[9])
{
	int i; 
	for(i = 0; i < MAX; i++)
	{
		game_board[i] = 0;
	}
}


char switch_char()
{
	switch(input)
	{
		case 'X':
		input = 'O';
		break;

		case 'O':
		input = 'X';
		break;

		default:
		printf("Error\n");
		break;
	}
}

void insert(char* game_board)
{
	int pos;
	scanf("%d", &pos);

	if(pos > 9  || pos <= 0)
	{
		printf("Please enter a value from 1 - 9\n");
	}

	game_board[pos] = input;
}


int main(int argc, char const *argv[])
{
	bool gamewon = false;

	printf("\t\t\t\tWelcome to naughts and crosses!\n\t\t\tTo play choose a position on the grid using the numpad\n\t\tThe first grid shown lists the positions of the grid to play\n\n");
	init_board();
	char game_board [MAX];
	init_game_board(game_board);
	display_board(game_board);

	while(gamewon != true)
	{
		insert(game_board);
		display_board(game_board);
		switch_char();
	}

	return 0;
}