#include <stdio.h>

/**
 * main - main program
 *
 * @argc - command count
 * @argv - actual command
 *
 * Return: 0 for sucess
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}

