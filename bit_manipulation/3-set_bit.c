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
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= 1UL << index;
	return (1);
}
