#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at a specific index
 * @head: Double pointer to the head of the list.
 * @index: Index position.
 *
 * Return: 1 on success or -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int i;

	if (!head || !*head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; temp && i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (!temp)
		return (-1);
	prev->next = temp->next;
	if (temp->next)
		temp->next->prev = prev;
	free(temp);
	return (1);
}
