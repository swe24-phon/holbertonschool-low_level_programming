#include "main.h"
#include <stdio.h>

/**
 * _memset - fill buffer with user input
 *
 * @s: string
 * @b: character to be fill
 * @n: number of items to fill
 *
 * Return: new filled buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (0);
}
