#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a specific index
 * @h: Double pointer to the head of the list.
 * @idx: Index position.
 * @n: Integer value for the new node.
 *
 * Return: Pointer to the newly inserted node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp, *prev;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *h;
		if (*h)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	temp = *h;
	while (temp && i < idx)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	if (i == idx)
	{
		newnode->next = temp;
		newnode->prev = prev;
		if (temp)
			temp->prev = newnode;
		prev->next = newnode;
		return (newnode);
	}
	free(newnode);
	return (NULL);
}
