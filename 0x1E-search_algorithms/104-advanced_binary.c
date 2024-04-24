#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * rec_binary_search - Recursively searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search in.
 * @low: Index of the low end of the array.
 * @high: Index of the high end of the array.
 * @value: Value to search for.
 * Return: Index of the value if found, otherwise -1.
 */
int rec_binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid = 0;
	size_t i = 0;

	if (low <= high)
	{

		mid = low + (high - low) / 2;

		printf("Searching in array: ");
		i = low;
		for (; i <= high; i++)
		{
			if (i > low)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		if (array[mid] == value && array[mid - 1] != value)
			return (mid);
		if (array[mid] >= value)
			return (rec_binary_search(array, low, mid, value));
		else
			return (rec_binary_search(array, mid + 1, high,
						value));
	}
	return (-1);
}

/**
 * advanced_binary - Calls rec_binary_search to return the index of the number.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return: Index of the value if found, otherwise -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (rec_binary_search(array, 0, size - 1, value));
}
