#include "main.h"

/**
 * _pow - helper to calculate pow 2 digits.
 * @j: digit position.
 *
 * Description:  function that help to converts a binary number to an uInt.
 * Return: 0 or nbr.
 */

unsigned int _pow(int j)
{
	if (j == 0)
		return (1);
	return (2 * _pow(j - 1));
}
/**
 * binary_to_uint - binary string to int nbr.
 * @b: binary string.
 *
 * Description:  function that converts a binary number to an uInt.
 * Return: 0 or nbr.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int nbr;
	int i;
	int j;

	nbr = 0;
	i = -1;
	j = 0;
	while (b && b[++i])
		if (b[i] != '0' && b[i] != '1')
			return (nbr);

	while (b && --i >= 0)
	{
		(b[i] == '1') ? (nbr += _pow(j)) : (nbr);
		j++;
	}

	return (nbr);
}
