#include <stdio.h>
#include "main.h"

/**
 * _strcat - concating two strings
 *
 * @dest: string
 * @src: string
 *
 * Return: result
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
