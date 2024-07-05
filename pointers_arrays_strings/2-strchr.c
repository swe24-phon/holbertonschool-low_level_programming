#include "main.h"
#include <stdio.h>
/**
 * _strchr - find a character
 *
 * @s: the string to be searched
 * @c: the character to find
 *
 * Return: pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
