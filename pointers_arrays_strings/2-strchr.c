#include "main.h"
#include <stdio.h>

/**
 * _strchr - find a character
 *
 * @s: the string to be search
 * @c: the character to find
 *
 * Return: string pattern
 *
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s);
		}
		s++;
		i++;
	}
	return (NULL);
}
