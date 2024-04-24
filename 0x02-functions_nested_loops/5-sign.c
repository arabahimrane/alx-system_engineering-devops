#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: int value
 *
 * Description: prints + or - or 0 the sign of a number.
 * Return: On success 1.Upper Case Return 0
 */
int print_sign(int n)
{
	if (n >= 0)
	{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		_putchar('+');
		return (1);
	}
	_putchar('-');
	return (-1);
}
