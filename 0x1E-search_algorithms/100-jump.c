#include "search_algos.h"
#include <math.h>
#include <stddef.h>

/**
* jump_search - function that searches for a value in an array Jump search.
* @array: array
* @size: size of array.
* @value: searchy value
* Return: integer
*/

int jump_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = 0;
	size_t step = sqrt(size);
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (end < size && array && array[end] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", end,
				array[end]);
		start = end;
		end = end + step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", start,
			end);
	i = start;
	while (i <= (end < size ? end : size - 1))
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
