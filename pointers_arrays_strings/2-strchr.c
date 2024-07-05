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

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else 
		{
			return('\0');
		}
		s++;
	}
	return (0);
}
