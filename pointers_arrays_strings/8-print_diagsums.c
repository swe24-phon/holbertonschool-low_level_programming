#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print diagonal sum of matrix
 *
 * @a: matrix of size
 * @size: matrix square size
 *
 */

void print_diagsums(int *a, int size)
{
	int dia_sum1 = 0;
	int dia_sum2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		dia_sum1 += a[i * size + i];
	}
	for (j = 0; j < size; j++)
	{
		dia_sum2 += a[j * size + (size - j - 1)];
	}
	printf("%d, %d\n", dia_sum1, dia_sum2);
}

