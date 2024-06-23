#include "main.h"
#define ZERO 48
/**
 * times_table - print out 9 time table
 *
 */
void times_table(void)
{
		int multipant, multiply = 0;
		int product;

		while (multipant <= 9)
		{
		while (multiply <= 9)
		{
			result = row * col;
			if ( result <= 9)
			{
				_putchar(result);
				_putchar(',');
				_putchar(' ');
				_putchar((' ');
			}
			else
			{
				_putchar(ZERO + result/10);
				_putchar(ZERO + result%10);
				_putchar(',');
				_putchar((' ');
			}
				multiply++;
		}
				multipant++;
				_putchar('\n');
		}
}
