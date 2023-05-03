#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: the head of the list/ the first node
 * Return: Void (Nothing)
 */
void free_listint2(listint_t **head)
{
	listint_t *node = *head;
	listint_t *temp;

	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	node = NULL;
}
