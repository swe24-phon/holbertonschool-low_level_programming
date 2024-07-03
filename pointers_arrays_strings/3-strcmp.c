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
	int result = 0;

	while (*s1 && *s2)
	{
		if (*s1 < *s2)
		{
			result = (*s1 - *s2);
			break;
		}
		else if (*s1 > *s2)
		{
			result = (*s1 - *s2);
			break;
		}
		else
		{
			result = (0);
		}
		s1++;
		s2++;
	}
	return (result);
}
