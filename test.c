#include <stdio.h>

typedef enum { false, true } bool;

#define MAX 9

char input = 'X';

//shows intial board with positions labelled
void init_board()
{
	char board [MAX] = {7,8,9,4,5,6,1,2,3};

		printf("| %d || %d || %d |\n", board[0], board[1], board[2]);
		printf("| %d || %d || %d |\n", board[3], board[4], board[5]);
		printf("| %d || %d || %d |\n", board[6], board[7], board[8]);
}

//shows game board that the user makes moves on
void display_board(char game_board[MAX])
{
	printf("\n\n");

		printf("| %c || %c || %c |\n", game_board[7], game_board[8], game_board[9]);
		printf("| %c || %c || %c |\n", game_board[4], game_board[5], game_board[6]);
		printf("| %c || %c || %c |\n", game_board[1], game_board[2], game_board[3]);
}

//sets all positons to blank
void init_game_board(char game_board[MAX])
{
	int i; 
	//had to set it to MAX + 1 (10) to initialise index 9 of the board
	for(i = 0; i < MAX + 1; i++)
	{
		game_board[i] = ' ';
	}
}


char switch_char()
{
	switch(input)
	{
		case 'X':
		printf("Noughts turn to play a position: ");
		input = 'O';
		break;

		case 'O':
		printf("Crosses turn to play a position: ");
		input = 'X';
		break;

		default:
		printf("Error\n");
		break;
	}
}

void insert(char* game_board)
{
	int numbers [MAX + 1] = {0,1,2,3,4,5,6,7,8,9};
	int pos;
	scanf("%d", &pos);

	if(game_board[pos] == ' ')
	{
		game_board[pos] = input;
	}
	else
	{
		switch_char();
		printf("\n----ERROR: Please choose an empty position----\n");
	}

}

/*bool checkwin(char game_board)
{
	bool gamewon = false;
	int winningcombo [8][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9},
		{1,4,7},
		{2,5,8},
		{3,6,9},
		{1,5,9},
		{7,5,3}
	};

	int i;
	for(i = 0; i < 8; i++)
	{
		if(game_board = winningcombo[i][0] && game_board = winningcombo[i][1] && game_board = winningcombo[i][2])
		{
			gamewon = true;
		}
	}
return gamewon;
}*/

int main(int argc, char const *argv[])
{
	bool gamewon = false;

	printf("Welcome to naughts and crosses!\nTo play choose a position on the grid using the numpad\nThe first grid shows lists the positions of the grid to play\n\n");
	
	char game_board [MAX];
	init_board();
	init_game_board(game_board);
	display_board(game_board);

	printf("Crosses to play first move: ");
	while(gamewon != true)
	{
		insert(game_board);
		display_board(game_board);
		switch_char();
	}

	return 0;
}