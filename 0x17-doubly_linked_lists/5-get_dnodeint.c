#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns
 * the nth node of a dlistint_t linked list.
 * @head: head of the list
 * @index: is the index of the node, starting from 0
 * Return: the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	while (head != NULL && index != 0)
	{
		head = head->next;
		index--;
	}
	return (head);
}
