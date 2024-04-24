#include "main.h"

/**
 * set_bit - set the nth bit
 * @n: nbr.
 * @index: nth index.
 *
 * Description: function that returns the value of a bit at a given index.
 * Return: the nth value or -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n = (*n | 1 << index);
	return (1);
}
