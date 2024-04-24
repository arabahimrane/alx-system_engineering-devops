#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * hash_table_print - that prints a hash table.
 * @ht: hash_table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int flg = 0;

	if (!ht)
		return;
	printf("{");
	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			if (flg)
				printf(", ");
			tmp = ht->array[i];
			while (tmp)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp)
					printf(", ");
			}
			flg = 1;
		}
		i++;
	}
	printf("}\n");
}
