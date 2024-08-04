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
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
