#include <stdlib.h>
#include "lists_h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: the head of the list
 * Return: Void (nothing)
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
