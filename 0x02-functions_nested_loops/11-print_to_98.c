#include "main.h"

/**
 * _putnbr - Print nbr.
 * @nbr:nbr to print.
 */
void _putnbr(int nbr)
{
	int i;

	i = 10;
	if (nbr < 0)
	{
		_putchar('-');
		nbr = -nbr;
	}
	while (nbr / i)
		i = i * 10;
	i = i / 10;
	while (i > 1)
	{
		_putchar((nbr / i) + '0');
		nbr = nbr % i;
		i = i / 10;
	}
	_putchar(nbr + '0');
}

/**
 * print_to_98 - Print nbr to 98.
 * @n: start from nbr.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		_putnbr(n);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		(n > 98) ? n-- : n++;
	}
	_putnbr(98);
	_putchar('\n');
}
