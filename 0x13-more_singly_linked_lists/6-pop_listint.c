#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * of a listint_t linked list, and returns
 * the head node’s data (n).
 *
 * @head: the head of the linked list
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	prev = *head;
	next = (*head)->next;

	free(prev);

	*head = next;

	return (n);
}
