#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - create a hash tab
 * @size: size of hash map
 *
 * Return: shash_table_t or NUll
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_t;
	unsigned long int i;

	hash_t = malloc(sizeof(shash_table_t));
	if (!hash_t)
		return (NULL);
	hash_t->size = size;
	hash_t->array = malloc(sizeof(shash_node_t *) * size);
	if (!hash_t->array)
		return (NULL);
	i = 0;
	while (i < hash_t->size)
	{
		hash_t->array[i] = NULL;
		i++;
	}
	hash_t->shead = NULL;
	hash_t->stail = NULL;
	return (hash_t);
}


/**
 * shash_table_set - set key to hash
 * @ht: hash shash_table_
 * @key: key of hash info
 * @value: value
 *
 * Return: 1 or 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *tmp, *tmp_1;

	if (strlen(key) == 0 || !ht || key == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->snext;
	}
	tmp_1 = malloc(sizeof(shash_node_t));
	if (!tmp_1)
		return (0);
	tmp_1->value = strdup(value);
	tmp_1->key = strdup(key);
	tmp->next = ht->array[idx];
	ht->array[idx] = tmp;
	if (!ht->shead)
	{
		tmp_1->sprev = NULL;
		tmp_1->snext = NULL;
		ht->shead = tmp_1;
		ht->stail = tmp_1;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		tmp_1->sprev = tmp;
		tmp_1->snext = tmp->snext;
	}
	return (1);
}

/**
 * shash_table_get - get key to hash
 * @ht: hash shash_table_
 * @key: key of hash info
 *
 * Return: NULL or value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;
	unsigned long int idx;

		if (!ht || strlen(key) == 0)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);
		tmp = tmp->snext;
	}
	return (NULL);

}
/**
 * shash_table_print- print key to hash
 * @ht: hash shash_table_
 *
 * Return: NULL or value
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (!ht)
		return;
	printf("{");
	tmp = ht->shead;
	while (tmp)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->snext;
		if (tmp)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - rev print key to hash
 * @ht: hash shash_table_
 *
 * Return: NULL or value
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (!ht)
		return;
	printf("{");
	tmp = ht->stail;
	while (tmp)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->sprev;
		if (tmp)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - rev print key to hash
 * @ht: hash shash_table_
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp;
	shash_node_t *tmp_1;

	tmp = ht->shead;
	while (tmp)
	{
		tmp_1 = tmp->snext;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
		tmp = tmp_1;
	}
	free(ht->array);
	free(ht);
}
