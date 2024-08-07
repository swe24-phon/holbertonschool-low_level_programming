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
	unsigned int i, nbit, mbit;

	if ((n >> 31) != (m >> 31))
		count++;

	for (i = 0; i < sizeof(unsigned long) * 8; i++)
	{
		nbit = (n >> i) & 1;
		mbit = (m >> i) & 1;

	if (nbit != mbit)
		count++;
	}

	return (count);
}
