#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - copy the elements as specified
 *
 * @dest: string
 * @src: string
 * @n: number of character to copy
 *
 * Return: result
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;
	int len = 0;

	while (*dest)
	{
		if (len < n)
		{
		*dest = *src;
		}
		len++;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
