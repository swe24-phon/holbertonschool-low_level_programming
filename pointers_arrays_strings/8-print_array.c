#include <stdio.h>
#include "main.h"

/**
 * print_array - print array elements
 *
 * @a: array elements
 * @n: up to nth elements
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
		printf("\n");
}
