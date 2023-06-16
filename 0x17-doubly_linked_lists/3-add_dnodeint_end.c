#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the
 * end of a dlistint_t list.
 * @head: head of the list
 * @n: value to add
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head != NULL)
	{
		while ((*head)->next != NULL)
			*head = (*head)->next;

		(*head)->next = node;
	}
	else
	{
		*head = node;
	}

	node->prev = *head;

	return (node);
}
