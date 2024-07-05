#include <stdio.h>
#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of a string
 *           which consists entirely of characters from a given set
 * @s: The string to be scanned
 * @accept: The string containing the characters to match
 *
 * Return: The number of characters in the initial segment of `s`
 *         which consist only of characters from `accept`
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p, *q;

	for (p = s; *p != '\0'; p++)
	{
		int found = 0;

		for (q = accept; *q != '\0'; q++)
		{
			if (*p == *q)
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		count++;
	}
	return (count);
}
