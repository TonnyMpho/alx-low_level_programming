#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position.
 * @h: head of the list
 * @idx: index of the list where the new node will should
 * be added
 * @n: value
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *idx_node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	index_node = *head;
	while (idx_node != NULL && idx != 0)
	{
		idx_node = idx_node->next;
		idx--;
	}

	if (idx_node->next == NULL)
		return (add_dnodeint_end(h, n));

	node->n = n;
	node->prev = idx_node;
	node->next = idx_node->next;
	idx_node->next->prev = node;
	idx_node->next = node;

	return (node);
