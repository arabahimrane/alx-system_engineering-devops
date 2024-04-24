#include "main.h"

/**
* puts_half - Print half of string.
* @str: string.
*
* Description: function that prints half of a string, followed by a new line.
*/
void puts_half(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		;
	if (i % 2 != 0)
		i = (i + 1) / 2;
	else
		i /= 2;
	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
