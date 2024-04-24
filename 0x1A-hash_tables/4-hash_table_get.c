#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash_table
 * @key: key of hash_table
 *
 * Return: str or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	if (!ht || strlen(key) == 0)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
