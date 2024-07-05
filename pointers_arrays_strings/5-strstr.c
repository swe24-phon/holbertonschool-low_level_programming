#include "main.h"
#include <stdio.h>

/**
 * _strstr - check for common pattern between two strings
 *
 * @haystack: string 1
 * @needle: string 2
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		if (*h == *n)
		{
			char *temp_h = h;
			char *temp_n = n;

			while (*temp_n != '\0' && *temp_h == *temp_n)
			{
				temp_h++;
				temp_n++;
			}
			if (*temp_n == '\0')
			{
				return (h);
			}
			h++;
		}
	}
	return (NULL);
}
