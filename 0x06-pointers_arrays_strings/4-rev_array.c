#include "main.h"

/**
* reverse_array - Reverse array.
* @a: array value.
* @n: arr length.
*
* Description: function that reverses the
* content of an array of integers.
*/

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	i = -1;
	tmp = 0;
	while (++i < --n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
