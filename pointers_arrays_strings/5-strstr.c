#include "main.h"
#include <stdio.h>

/**
 * _strstr - check for common pattern between two strings
 *
 * @haystack: string 1
 * @needle: string 2
 *
 * Return: Pointer to the first occurrence of the substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (; *haystack != '\0'; haystack++)
	{
		h = haystack;
		n = needle;

	while (*h == *n && *n != '\0')
	{
		h++;
		n++;
	}
	if (*n == '\0')
	{
		return (haystack);
	}
	}
	return (NULL);
}
