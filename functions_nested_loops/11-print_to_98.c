#include "main.h"i
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @a: integer number
 * @b: integer number
 *
 * Return: 0 on sucess
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	while ( n < 98)
	{
		printf("%i,", n);
		n++;
	}
	else if (n > 98)
	{
		while (n < 98)
		{
			printf("%i," n);
			n--;
		}
	}
	else
		print("98\n");
			
}
