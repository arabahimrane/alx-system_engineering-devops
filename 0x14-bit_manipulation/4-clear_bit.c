#include "main.h"

/**
 * clear_bit - clear the nth bit
 * @n: nbr.
 * @index: nth index.
 *
 * Description: function that sets the nth nbr value of nbr.
 * Return: the 1 value or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
