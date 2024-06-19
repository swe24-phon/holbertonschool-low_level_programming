#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - list out digit 1 to 9
 *
 * Return: 0 on success
 */

int main(void)
{
	char numchar = '0';

	while (numchar <= '9')
	{
		putchar(numchar);
		numchar++;
	}
	putchar('\n');
	return (0);
}
