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

		while (multipant < 9)
		{
		while (multiply <= 9)
		{
			product = multipant * multiply;
			if ( product <= 9)
			{
				_putchar(ZERO + product);
				_putchar(',');
				_putchar(' ');
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
