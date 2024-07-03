#include <stdio.h>
#include "main.h"

/**
 * string_toupper - all letters to upper case
 *
 * @s: array of integers
 *
 * Return: result
 */

char *string_toupper(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
	s++;
	}
	return (s);
}
