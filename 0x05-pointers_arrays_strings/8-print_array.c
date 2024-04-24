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

/**
* print_array- Print Element of Array.
* @a: Array.
* @n: nbr of element
*
* Description: unction that prints n elements of an array of
* integers, followed by a new line.
*/
void print_array(int *a, int n)
{
	int i;

	i = 0;
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n - 1)
		{
			print_number(a[i++]);
			_putchar(',');
			_putchar(' ');
		}
		print_number(a[i]);
		_putchar('\n');
	}
}
