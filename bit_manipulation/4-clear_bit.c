#include <stdio.h>
#include "main.h"

/**
 * clear_bit - clear bit to 0 at index
 *
 * @n: integer pointer
 * @index: desired position
 * Return: integer number
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = *n & ~(1UL << index);
	return (1);
}
