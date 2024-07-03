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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	i++;
	}
	return (s);
}
