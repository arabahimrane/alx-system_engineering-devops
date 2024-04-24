#include "main.h"

/**
 * print_binary - print binary nbrs whith.
 * @n: nbr to prt
 *
 * Description:function that prints the binary representation of a number.
 */
void print_binary(unsigned long int n)
{
	int size;
	unsigned long int tmp;
	int is_zero;

	n ? (size = sizeof(n) * 8) : (size = 1);
	is_zero = 0;
	while (--size >= 0)
	{
		tmp = n >> size;
		if (1 & tmp)
		{
			_putchar('1');
			is_zero++;
		}
		else if (is_zero || n == 0)
			_putchar('0');
	}
}
