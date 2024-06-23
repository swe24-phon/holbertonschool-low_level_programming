#include "main.h"
#define ZERO = 0
/**
 * times_table - print out 9 time table
 *
 */
void times_table(void)
{
		int nth_table, multiply = 0;
		while (nth_table <= 9)
		{			
		while (multiply <= 10)
		{
			_putchar( ZERO + (nth_table * multiply));
			_putchar(',');
			multiply++;
		}	
		_putchar('\n');
		nth_table++;	
		}
}
