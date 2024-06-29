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
	int length, rev = 0;

	while (s[length])
		length++;
	rev = length;
	while (rev >= 0)
	{
		_putchar(*(s + rev));
		rev--;
	}
	_putchar('\n');
}
