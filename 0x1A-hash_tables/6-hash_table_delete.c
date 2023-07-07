#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 * Return: Void (Nothing)
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			node = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = NULL;
		}
	}
	free(ht->array);
	free(ht);
}
