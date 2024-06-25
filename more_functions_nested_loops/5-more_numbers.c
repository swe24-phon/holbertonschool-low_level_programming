#include <stdio.h>
#include "main.h"

#define ZERO 48
/**
 * print_most_numbers - print a sequence of 0 to 9, but not 2 and 4
 *
 */


void more_numbers(void)
{
	int counter;
	int row = 0;

	while (row < 10)
	{
		counter = 0;
		while (counter <= 14)
		{	
			if (counter > 9)
			{
				_putchar(ZERO + counter / 10);
			}
			_putchar(ZERO + counter % 10);
			counter++;
		}
	_putchar('\n');
	row++;
	}
}
