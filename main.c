#include <stdio.h>
#include <stdbool.h>

bool func(bool T)
{
	T = true;
	return T;
}

int main(int argc, char const *argv[])
{
	bool gamewon = false;
	func(gamewon);
	if(gamewon = true)
	{
		printf("var true\n");
	}
	else
	{
		printf("Error\n");
	}

	return 0;
}