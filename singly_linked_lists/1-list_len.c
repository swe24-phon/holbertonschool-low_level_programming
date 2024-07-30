#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - count number of nodes
 * @h: pointer to the list_t list
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
