#include <stdint.h>
#include <stdio.h>
#include "main.h"

/**
 * flip_bits - flip the bit
 *@n: integer number
 *@m: interger number
 * Return: interger of flip bit
 */

unsigned int flip_bits(unsigned long n, unsigned long m)
{
	unsigned int count = 0;
	int i;

	if ((n >> 31) != (m >> 31))
		count++;
	for (i = 30; i >= 0; i--)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;
	}
	return (count);
}
