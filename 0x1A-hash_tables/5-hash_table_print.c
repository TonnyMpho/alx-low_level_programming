#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table
 * Return: Void (Nothing)
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL)
		return (NULL);

	printf("{\n");
	for (i = 0; i < ht->size; i++)
	{
		node = ht-array[i];
		while (node != NULL)
		{
			printf(" '%s': '%s'\n" node->key, node->value
			node = node->next;
		}
	}
	printf("}\n");
}
