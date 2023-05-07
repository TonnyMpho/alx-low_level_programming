#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: the head of the list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;

		prev_node = *head;
		*head = next_node;
	}

	if (prev_node != NULL)
		prev_node->next = NULL;

	return (prev_node);
}
