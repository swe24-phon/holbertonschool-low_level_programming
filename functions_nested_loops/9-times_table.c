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

		while (multipant <=i 9)
		{
		while (multiply <= 9)
		{
			product = multipant * multiply;
			if (multiply == 0)
			{
				_putchar(ZERO + product);
				_putchar(',');
			}
			else if ( product <= 9)
			{
				_putchar(' ');
				_putchar(ZERO + product);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(ZERO + product/10);
				_putchar(ZERO + product%10);
				_putchar(',');
				_putchar(' ');
			}
				multiply++;
		}
				multipant++;
				_putchar('\n');
		}
}
