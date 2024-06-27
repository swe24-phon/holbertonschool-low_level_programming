#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap two integer
 *
 * @a: integer
 * @b: integer
 *
 */


void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
