#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: head of the linked list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	list_t *l_node;
	size_t i = 0;

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}

	n_node->next = NULL;

	while (str[i] != '\0')
		i++;

	n_node->len = i;

	if (*head != NULL)
	{
		l_node = *head;

		while (l_node->next != NULL)
			l_node = l_node->next;
		l_node->next = n_node;
	}
	else
		*head = n_node;

	return (n_node);
}
