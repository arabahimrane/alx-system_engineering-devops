#include "main.h"

/**
* swap_int - swaps the values of two integers.
* @a: pointer value.
* @b: pointer to swap.
*
* Description :function that swaps the values of two integers.
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
