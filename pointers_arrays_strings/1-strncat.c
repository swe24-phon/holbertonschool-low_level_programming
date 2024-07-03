#include <stdio.h>
#include "main.h"

/**
 * _strcat - concating two strings
 *
 * @dest: string
 * @src: string
 * @n: number of times
 *
 * Return: result
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;
	int len = 0;

	while (*dest)
	{
		dest++;
	}
	while (*src)
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
