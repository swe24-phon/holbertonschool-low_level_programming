#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - check if memory has been allocated
 *
 * @b: the value
 *
 * Return: ptr on sucess
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
