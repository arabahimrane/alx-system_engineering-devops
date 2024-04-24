#include <stdio.h>
#include "main.h"

/**
* print_diagsums - Sum of the two diagonals.
* @a: matrix tab.
* @size: matrix size.
*
* Description :  function that prints the sum of the
* two diagonals of a square matrix of integers.
*/

void print_diagsums(int *a, int size)
{
	int i;
	int diag1;
	int diag2;

	i = -1;
	diag1 = 0;
	diag2 = 0;
	while (++i < size)
	{
		diag1 += a[(size * i) + i];
		diag2 += a[(size * (i + 1)) - i - 1];
	}
	printf("%d, %d\n", diag1, diag2);
}
