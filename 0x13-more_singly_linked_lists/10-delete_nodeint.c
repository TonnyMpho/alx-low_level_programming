#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the
 * node at index index of a listint_t linked list.
 *
 * @head: the head of the linked list
 * @index: the index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr_node, *prev_node;
	unsigned int i = 1;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index === 0)
	{
		curr_node = *head;
		*head = curr_node->next;
		free(curr_node);
		return (1);
	}

	prev_node = *head;
	curr_node = prev-node->next;

	while (i < index && curr_node != NULL)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
		i++;
	}

	if (curr_node == NULL)
		return (-1);

	prev_node->next = curr_node->next;
	free(curr_node);
	return (1);
}
