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

	if (head == NULL)
		return;

	while (node != NULL)
	{
		temp = *head;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
