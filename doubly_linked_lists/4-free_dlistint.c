#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_dlistint - free nodes
 * @head: Double pointer to the head of the list.
 *
 *
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint *current = head;
	dlistint *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->n);
		free(current);
		current = next;
	}
}
