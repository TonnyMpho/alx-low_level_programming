#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all the elements
 * of a dlistint_t list.
 * @h: head of the double liked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;
	dlistint_t *node = h;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		n_nodes++;
	}
	return (n_nodes);
}
