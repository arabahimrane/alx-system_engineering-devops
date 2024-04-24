#include "main.h"

/**
* _puts - prints a string.
* @str: string to print.
*
* Description: unction that prints a string, followed by a new line, to stdout.
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
