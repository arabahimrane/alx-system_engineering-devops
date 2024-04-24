#include "main.h"

/**
 * print_last_digit -  Print Last digit.
 * @n: int value
 *
 * Description: Print last digit of nbr.
 * Return: On success last degit(n).
 */
int print_last_digit(int n)
{
	int tmp;

	if (n < 0)
		tmp = -1 * (n % 10);
	else
		tmp = n % 10;
	_putchar(tmp + '0');
	return (tmp);
}
