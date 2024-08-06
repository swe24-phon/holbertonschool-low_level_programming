#include <stdio.h>
#include "main.h"

/**
 * set_bit - set bit to 1 at index
 *
 * @n: integer pointer
 * @index: desired position
 * Return: 0 on success, -1 if index is out of bounds
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n |= 1UL << index;
		return (0);
	}
	else
		return (-1);
}
