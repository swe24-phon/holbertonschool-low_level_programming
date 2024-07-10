#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program
 *
 * @argc: argument counter
 * @argv: actual arguments
 *
 * Return: 0 for sucess
 */

int main(int argc, char *argv[])
{
	int result = 0;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		result = atoi(argv[2]) * atoi(argv[1]);
		printf("%d\n", result);
	}
	return (0);
}

