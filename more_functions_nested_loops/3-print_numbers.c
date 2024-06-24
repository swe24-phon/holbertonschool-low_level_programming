#include <stdio.h>
#include "main.h"

#define ZERO 48
#define NEW_LINE 13
/**
 * print_numbers - print a sequence of 0 to 9
 *
 */


void print_numbers(void)
{
	int counter = 0;

	while (counter <= 9)
	{
		_putchar(ZERO + counter);
		counter++;
	}
	_putchar(NEW_LINE);
		
}
