#include <stdio.h>
#include "main.h"

#define ZERO 48
/**
 * print_most_numbers - print a sequence of 0 to 9, but not 2 and 4
 *
 */


void more_numbers(void)
{
	int unit, tenth;
	int row = 0;

	while (row < 10)
	{
	while (tenth < 1)
	{
		unit = 0;
		while (unit < 9)
		{	
			_putchar(ZERO + unit);
			unit++;
	}
	_putchar('\n');
	row++;
}
