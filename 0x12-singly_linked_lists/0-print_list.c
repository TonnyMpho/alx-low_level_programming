#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: head
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str != NULL)
		{
			printf("%s\n", h->str);
		}
		else
			printf("[0] (nil)\n");

		h = h->next;
	}

	return (i);
}
