#include "main.h"
#include <stdio.h>

/**
 * m_strpbr - check the code
 *
 * @s: string
 * @accept: pattern to search for
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
