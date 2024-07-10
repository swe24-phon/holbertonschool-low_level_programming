#include <stdio.h>

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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

