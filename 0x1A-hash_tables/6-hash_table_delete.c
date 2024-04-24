#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_delete - that prints a hash table.
 * @ht: hash_table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	hash_node_t *tmp_1;

	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			tmp = ht->array[i];
			while (tmp)
			{
				tmp_1 = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = tmp_1;
			}

		}
		i++;
	}
	free(ht->array);
	free(ht);
}
