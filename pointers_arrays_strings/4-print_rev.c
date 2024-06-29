#include <stdio.h>
#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: string of char pointer
 *
 */


void print_rev(char *s)
{
	int length = 0;
	int rev;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	rev = length;
	while (rev >= 0)
	{
		_putchar(*(s + rev));
	}
	_putchar('\n');
}
