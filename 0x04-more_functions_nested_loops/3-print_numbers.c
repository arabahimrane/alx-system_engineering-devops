#include "main.h"

/**
* print_numbers - Print nbrs.
* Description : function that prints the numbers, from 0 to 9 \n.
*/

void print_numbers(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		_putchar(c++);
	}
	_putchar('\n');
}
