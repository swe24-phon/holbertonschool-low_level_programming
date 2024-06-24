#include <stdio.h>
#include "main.h"

#define ZERO 48
/**
 * print_most_numbers - print a sequence of 0 to 9, but not 2 and 4
 *
 */


void print_most_numbers(void)
{
	int counter = 0;

	while (counter <= 9)
	{
		if (counter != 2 || counter != 4)
		{
			_putchar(ZERO + counter);
		}

		counter++;
	}
	_putchar('\n');

}
