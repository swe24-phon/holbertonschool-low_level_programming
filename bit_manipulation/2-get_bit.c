#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit - find the binary bit at the index position
 * @n: the number to print
 * @index: the desire location
 *
 * Return: integer on sucess
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
