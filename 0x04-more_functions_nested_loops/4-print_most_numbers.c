#include "main.h"

/**
* print_most_numbers - Print nbrs.
* Description : function that prints the numbers
* (not 2 and 4), from 0 to 9 \n.
*/

void print_most_numbers(void)
{
	char c;

	c = '0';
	while (c <= '9')
		(c == '2' || c == '4') ? c++ : _putchar(c++);
	_putchar('\n');
}
