#include <stdio.h>
#include "main.h"

/**
 * puts2 - print every other character
 *
 * @str: string of char pointer
 *
 */

void puts2(char *str)
{
	int loc = 0;
	char *temp = str;

	while (*temp != '\0')
	{
		if (loc % 2 == 0)
		{
			_putchar(*temp);
		}
		loc++;
		temp++;
	}
	_putchar('\n');
}
