#include <stdio.h>
#include "main.h"

/**
 * _puts - print a string
 *
 * @str: string of char point
 *
 */


void _puts(char *str)
{

	for ( ; *str != '\0'; )
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
