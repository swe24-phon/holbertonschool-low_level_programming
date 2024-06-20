#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - list out hexidecimal number in lower case alphabet
 *
 * Return: 0 on success
 */

int main(void)
{
	char number = '0', lowercap = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	while (lowercap <= 'f')
	{
		putchar(lowercap);
		lowercap++;
	}
	putchar('\n');
	return (0);
}
