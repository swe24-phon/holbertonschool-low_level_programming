#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - array of char
 *
 * @size: size of the array
 * @c: the character to fill the memory specified
 *
 * Return: char to fill or NULL
 *
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *array = malloc(size * sizeof(char));
	unsigned int i;

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
