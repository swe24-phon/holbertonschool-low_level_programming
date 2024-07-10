#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes each
 *           and initializes all bytes to zero.
 *
 * @nmemb: Number of elements in the array.
 * @size: Size in bytes of each element.
 *
 * Return: Pointer to the allocated memory on success, or NULL on failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int zeros;
	unsigned int mem_size = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(mem_size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (zeros = 0; zeros < mem_size; zeros++)
	{
		*(arr + zeros) = 0;
	}
	return (arr);
}
