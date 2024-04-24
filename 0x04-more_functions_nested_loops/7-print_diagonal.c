#include "main.h"

/**
* print_diagonal - Print a diagnonal line.
* @n: length of line.
* Description : Draw diagonal line.
*/

void print_diagonal(int n)
{
	int i;
	int sp;

	i = -1;
	while (++i < n)
	{
		sp = 1;
		while (sp++ <= i)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
