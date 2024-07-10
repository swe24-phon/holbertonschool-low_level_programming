#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Allocates memory for an array of elements from min to max
 *               and initializes all elements with their corresponding values.
 *
 * @min: Minimum value of the range (inclusive).
 * @max: Maximum value of the range (inclusive).
 *
 * Return: Pointer to the allocated memory on success, or NULL on failure.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;
	int mem_size = 0;

	if (min > max)
		return (NULL);
	mem_size = (max - min + 1) * sizeof(int);
	arr = malloc(mem_size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		arr[i - min] = i;
	}
	return (arr);
}
