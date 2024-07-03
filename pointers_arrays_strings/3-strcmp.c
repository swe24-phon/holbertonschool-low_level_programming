#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compare
 *
 * @s1: string
 * @s2: string
 *
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 < *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s1 > *s2)
		{
			return (*s1 - *s2);
		}
		else
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (0);
}
