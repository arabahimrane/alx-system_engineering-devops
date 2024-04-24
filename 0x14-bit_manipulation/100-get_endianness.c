#include "main.h"

/**
 * get_endianness - check the endianness of a system.
 *
 * Description: Endianness refers to the byte order in memory representation
 * of multi-byte data types
 * Return: 1 or 0; mini or big.
 */
int get_endianness(void)
{
	int try;

	try = 1;
	if (*(char *) &try == 1)
		return (1);
	return (0);
}
