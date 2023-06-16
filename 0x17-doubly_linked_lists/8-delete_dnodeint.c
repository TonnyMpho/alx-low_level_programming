#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: head of the list
 * @index: is the index of the node that should be deleted.
 * Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;

	if (*head == NULL)
		return (-1);

	node = *head;
	while (*head != NULL && index != 0)
	{
		node = node->next;
		if (node == NULL)
			return (-1);
		index--;
	}

	if (node == *head)
	{
		*head = node->next;
		if (*head != NULL)
			node->next->prev = node->prev;
	}
	else
	{
		node->prev->next = node->next;

		if (node->next != NULL)
		{
			node->next->prev = node->prev;
		}
	}
	free(node);
	return (1);
}
