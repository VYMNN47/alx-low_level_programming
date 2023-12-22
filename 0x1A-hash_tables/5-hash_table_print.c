#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table to print
 *
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	char f = 0;
	hash_node_t *hn;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		hn = ht->array[x];
		while (hn != NULL)
		{
			if (f == 1)
				printf(", ");
			printf("'%s': '%s'", hn->key, hn->value);
			f = 1;
			hn = hn->next;
		}
	}
	printf("}\n");
}
