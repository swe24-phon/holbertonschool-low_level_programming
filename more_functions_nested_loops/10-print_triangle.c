#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print a print_triangle of size specified
 *@size : integer number for size
 *
 */

void print_triangle(int size)
{
	int length, blank, star;
	int width = size;
	int fill = 1;

	if (!(width <= 0))
	{
		for (length = 1; length <= width; length++)
		{
			for (blank = 1; blank <= width - fill; blank++)
			{
				_putchar(' ');
			}
			for (star = 1; star <= fill; star++)
			{
				_putchar('#');
			}
			fill++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
