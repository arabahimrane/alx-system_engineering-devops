#include "main.h"

/**
* _puts_recursion - prints a string.
* @s: src string to print.
*
* Description : function that prints a string, followed by a new line.
*/

void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
