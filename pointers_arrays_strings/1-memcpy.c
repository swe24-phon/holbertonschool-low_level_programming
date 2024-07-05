#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copy from src to dest buffer in hexa
 * @dest: the address of memory of src's copy
 * @src: the address of memory to copy to
 * @n: the number of item to be copied
 *
 * Return: dest values.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
