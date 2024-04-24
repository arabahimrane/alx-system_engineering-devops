#include <stdio.h>
#include "main.h"

/**
* print_triangle - function that prints a triangle.
* @size : sie of triangle
* Description : Function that prints a triangle, followed by a new line.
*/
void print_triangle(int size)
{
	int row;
	int col;
	int sp;
	int spCount;

	row = -1;
	sp = size - 1;
	col = size - sp;
	while (++row < size)
	{
		spCount = -1;
		while (++spCount < sp)
			_putchar(' ');
		spCount = -1;
		while (++spCount < col)
			_putchar('#');
		_putchar('\n');
		sp = sp - 1;
		col = size - sp;
	}
	if (size <= 0)
		_putchar('\n');
}
