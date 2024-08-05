#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get nodes index
 * @head: Double pointer to the head of the list.
 * @index: location of the node
 *
 * Return: node position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	i = 0;
	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
