#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * dlistint_len - find total length of nodes
 * @h: pointer to the head of the list.
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
