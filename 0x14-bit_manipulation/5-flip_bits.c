#include "main.h"

/**
 * flip_bits - clear or set the nth bit
 * @n: nbr.
 * @m: nth index.
 *
 * Description: function that sets or clear the nth nbr value of nbr.
 * Return: the 1 value or -1.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits;
	int size;
	unsigned int cnt;

	size = sizeof(n) * 8;
	bits = n ^ m;
	cnt = 0;
	while (--size >= 0)
		if (bits >> size & 1)
			cnt++;
	return (cnt);
}
