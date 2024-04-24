#include "main.h"

/**
* print_square - Print a square.
* @n: length of line.
* Description : Draw square.
*/

void print_square(int n)
{
	int row;
	int col;

	row = -1;
	while (++row < n)
	{
		col = -1;
		while (++col < n)
			_putchar('#');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
