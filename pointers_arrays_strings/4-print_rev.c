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

	for ( ; *s != '\0'; )
		length ++;
	while ( length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
