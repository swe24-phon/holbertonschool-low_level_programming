#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_dlistint - add intergers in all nodes
 * @head: Double pointer to the head of the list.
 *
 * Return: total sum
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		head = head->next;
		sum += sum + head->n;
	}
	return (sum);
}
