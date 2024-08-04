#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a node
 * @head: pointer to the list_t list
 * @str: str to add to the node
 *
 * Return: the new node, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    char *new_str;
    unsigned int len = 0;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    new_str = strdup(str);
    if (new_str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    while (str[len] != '\0')
        len++;

    new_node->str = new_str;
    new_node->len = len;  
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}

