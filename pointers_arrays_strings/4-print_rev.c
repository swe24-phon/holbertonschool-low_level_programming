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
	char *temp = s;

	while (*temp != '\0')
	{
		length++;
		temp++;
	}
	rev = length;
	while (rev--)
	{
		_putchar(*(s + rev));
	}
	_putchar('\n');
}
