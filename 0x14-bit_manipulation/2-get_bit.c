#include "main.h"

/**
 * get_bit - det the nth bit
 * @n: nbr.
 * @index: nth index.
 *
 * Description: function that returns the value of a bit at a given index.
 * Return: the nth value or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n & 1 << index ? 1 : 0);
}
