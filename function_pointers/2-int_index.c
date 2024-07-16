#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - index of the first element, the cmp function does not return 0
 * @array: array of elements
 * @size: array size
 * @cmp: function pointer call
 *
 * Return: on sucess
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
