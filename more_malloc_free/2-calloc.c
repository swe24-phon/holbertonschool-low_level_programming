#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: s2's characters to join with s1
 *
 * Return: ptr on sucess
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *joinptr;
	unsigned int s1len = 0, s2len = 0, i = 0, totallen = 0;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	while (s1[s1len])
		s1len++;
	while (s2[s2len])
		s2len++;
	if (n < s2len)
		s2len = n;

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
