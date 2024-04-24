#include "function_pointers.h"

/**
 * int_index - search for int.
 * @array: array to play with.
 * @size: size of arr.
 * @cmp: ptr func to action on arr.
 *
 * Description: function that searches for an integer.
 * Return: found the int return 1 or 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = -1;
	if (size <= 0 || !array || !cmp)
		return (-1);
	while (++i < size)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
