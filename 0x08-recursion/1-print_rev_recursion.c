#include "main.h"

/**
* _print_rev_recursion - Rev or ver prints a string.
* @s: src string to print.
*
* Description :  function that prints a string in reverse.
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
