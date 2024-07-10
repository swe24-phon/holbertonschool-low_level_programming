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

	if (argc == 3)
	{
		result = atoi(argv[2]) * atoi(argv[1]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

