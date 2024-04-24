#include "main.h"

/**
* puts2 - prints every other character of a string
* @str: string.
*
* Description: function that prints every other character
* of a string, starting with the first
* character, followed by a new line.
*/
void puts2(char *str)
{
	int i;
	int j;

	i = -1;
	j = 0;
	while (str[++i])
		;
	while (str[j] && j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
