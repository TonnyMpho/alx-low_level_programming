#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning
 * of a list_t list.
 *
 * @head: double pointer to the head of the list
 * @str: string to be added
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t i = 0;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	while (str[i] != '\0')
		i++;

	node->next = *head;
	*head = node;
	node->len = i;

	return (node);
}
