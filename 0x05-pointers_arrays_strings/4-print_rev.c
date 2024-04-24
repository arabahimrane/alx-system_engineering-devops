#include "main.h"
#include <stdio.h>
/**
* print_rev - prints rev string.
* @s: string to print.
*
* Description: function that prints a string, in reverse
* followed by a new line.
*/
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*s++)
		i++;
	s--;
	while (i-- > 0)
		_putchar(*--s);
	_putchar('\n');
}
