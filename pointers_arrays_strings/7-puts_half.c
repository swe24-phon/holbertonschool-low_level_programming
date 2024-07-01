#include <stdio.h>
#include "main.h"

/**
 * puts_half - print last half
 *
 * @str: string of character
 *
 */

void puts_half(char *str)
{
	int length, half;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	half = length / 2;
	if (length % 2 == 1)
	{
		half++;
	}
	while (half < length)
	{
		_putchar(str[half]);
		half++;
	}
		_putchar('\n');
}
