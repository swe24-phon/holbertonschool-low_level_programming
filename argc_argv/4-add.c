#include <stdio.h>
#include <stdlib.h>

/**
 * add_positive_numbers - add two number
 *
 * @argc: argument counter
 * @argv: actual arguments
 *
 * Return: 0 for sucess
 */

void add_positive_numbers(int argc, char *argv[])
{
	int i, sum = 0;
	int number;

	for (i = 1; i < argc; i++)
	{
		number = atoi(argv[i]);
		if (number <= 0)
		{
			printf("Error\n");
			exit(1);
		}
		sum += number;
	}
	printf("%d\n", sum);
}

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
	add_positive_numbers(argc, argv);
	return (0);
}
