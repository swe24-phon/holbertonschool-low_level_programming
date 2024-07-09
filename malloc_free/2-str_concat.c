#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concate two strings
 *
 * @s1: the string
 * @s2: the string to join
 *
 * Return: char to fill or NULL
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *joinptr;
	unsigned int s1len = 0, s2len = 0, i = 0, totallen = 0;

	while(*s1 && *s2)
	{
	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	while (s1[s1len])
		s1len++;
	while (s2[s2len])
		s2len++;
	totallen = s1len + s2len;

	joinptr = malloc((totallen + 1) * sizeof(char));

	if (joinptr == NULL)
		return (NULL);
	for (i = 0; i < s1len; i++)
		joinptr[i] = s1[i];
	for (i = s1len; i < totallen; i++)
		joinptr[i] = s2[i - s1len];
	joinptr[totallen] = '\0';
	return (joinptr);
	}
	return (NULL);
}
