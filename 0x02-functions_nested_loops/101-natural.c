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
 * main - Print sum of 1024
 *
 * Return: On success 0.
 */
int main(void)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (i < 1024)
	{
		if (i % 5 == 0 || i % 3 == 0)
			sum += i;
		i++;
	}
	_putnbr(sum);
	_putchar('\n');
	return (0);
}
