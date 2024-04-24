#include <stdlib.h>
#include "main.h"

/**
 * array_range - array of integers.
 * @min: min value
 * @max: max value
 *
 * Description: function that creates an array of integers.
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int j;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (!arr)
		return (NULL);
	i = min - 1;
	j = 0;
	while (++i <= max)
		arr[j++] = i;
	return (arr);
}
