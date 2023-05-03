#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: the head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t n_elements = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		n_elements++;
	}

	return (n_elements);
}
