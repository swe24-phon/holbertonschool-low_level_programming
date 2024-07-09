#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate string
 *
 * @str: the string to duplicate
 *
 * Return: char to fill or NULL
 *
 */

char *_strdup(char *str)
{
	char *dupptr;
	unsigned int len = 0, i;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	dupptr = malloc((len + 1) * sizeof(char));

	if (dupptr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dupptr[i] = str[i];
	dupptr[len] = '\0';
	return (dupptr);
}
