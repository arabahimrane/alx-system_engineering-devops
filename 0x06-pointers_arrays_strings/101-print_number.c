#include "main.h"

/**
 * print_number - Print nbr.
 * @n : nbr to print.
 */
void print_number(int n)
{
	unsigned int nbr;

	if (n < 0)
	{
		_putchar('-');
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr >= 10)
		print_number(nbr / 10);
	_putchar(nbr % 10 + '0');
}
