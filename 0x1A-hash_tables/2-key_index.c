#include "hash_tables.h"

/**
 * key_index - generate index from table
 * @size: size of the hash table
 * @key: string to hash
 *
 * Return: index of str
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
