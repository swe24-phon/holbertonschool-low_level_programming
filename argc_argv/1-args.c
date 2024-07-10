#include <stdio.h>

/**
 * main - main program
 *
 * @argc: command count
 * @argv: actual command
 *
 * Return: 0 for sucess
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

