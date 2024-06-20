#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - list out decimal number without using char type
 *
 * Return: 0 on success
 */

int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		if (number != 57)
		{
		putchar(44);
		putchar(32);
		}
		number++;
	}
	putchar('\n');
	return (0);
}
