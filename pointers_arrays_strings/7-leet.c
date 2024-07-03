#include <stdio.h>
#include "main.h"

/**
 * leet - encrypting message
 *
 * @s: string of words
 *
 * Return: result
 */

char *leet(char *s)
{
	int i, j;
	char *drp = "aAeEoOtTlL";
	char *crp = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == drp[j])
			{
				s[i] = crp[j];
			}
		}
	}
	return (s);
}
