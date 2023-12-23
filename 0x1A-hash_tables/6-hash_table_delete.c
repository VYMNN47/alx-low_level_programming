#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table to be deleted
 *
 * Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (x = 0; x < ht->size; x++)
	{
		while (ht->array[x] != NULL)
		{
			next = ht->array[x]->next;
			free(ht->array[x]->key);
			free(ht->array[x]->value);
			free(ht->array[x]);
			ht->array[x] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
