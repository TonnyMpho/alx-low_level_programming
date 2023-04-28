#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of
 * elements in a linked list_t list.
 * @h: head of the list
 * Return: number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}

	return (elements);
}
