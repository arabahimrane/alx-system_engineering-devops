#include "function_pointers.h"

/**
 * array_iterator - play with array
 * @array: array to play with.
 * @size: size of arr.
 * @action: ptr func to action on arr.
 *
 * Description:  func to print name using ptr of func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
			(*action)(array[i++]);
	}
}
