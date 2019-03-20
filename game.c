#include <stdio.h>

#define MAX 9	

void display_board(char* board)
{
	int i;
	for(i = 0; i < MAX; i++)
	{
		printf("|%c|", board[i]);
	}
}


int main(int argc, char const *argv[])
{
	char board[9];
	display_board(board);
	return 0;
}