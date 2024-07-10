#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings
 *
 * @nmemb: number of elements in the array
 * @size: bytes size of each element
 *
 * Return: arr on sucess
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int zeros;
	int *arr;

	arr = malloc(size * (sizeof(int)));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (zeros = 0; zeros < nmemb; zeros++)
	{
	       arr[zeros] = 0;
	}
	return (arr);
}
