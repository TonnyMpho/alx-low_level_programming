#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at th
 * beginning of a listint_t list
 * @head: head of the list
 * @n: the element to add
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->n = n;
	n_node->next = *head;

	*head = n_node;

	return (n_node);
}
