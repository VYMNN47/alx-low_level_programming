#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: table to retrieve from
 * @key: key to find value
 *
 * Return: the value associated with the element
 * or NULL if key not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int x;
	hash_node_t *hn;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0)
		return (NULL);
	x = key_index((const unsigned char *)key, ht->size);
	hn = ht->array[x];
	while (hn != NULL)
	{
		if (strcmp(hn->key, key) == 0)
			return (hn->value);
		hn = hn->next;
	}
	return (NULL);
}
