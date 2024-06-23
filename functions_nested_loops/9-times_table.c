#include "main.h"
#define ZERO 48
/**
 * times_table - print out 9 time table
 *
 */
void times_table(void)
{
		int multipant = 0;
		int product;

		while (multipant <= 9)
		{
			int multiply = 0;
		while (multiply <= 9)
		{
			product = multipant * multiply;
			if ((multiply == 0)
			{
				_putchar(ZERO + product);
			}
			else if ( product <= 9)
			{
				_putchar(' ');
				_putchar(ZERO + product);
			}
			else
			{
				_putchar(ZERO + product/10);
				_putchar(ZERO + product%10);
			}
			if (multiply < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
				multiply++;
		}
				_putchar('\n');
				multipant++;
		}
}
