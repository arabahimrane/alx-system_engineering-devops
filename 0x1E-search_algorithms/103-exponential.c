#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_s - Searches for a value in a sorted array using
 *                 the Binary search algorithm within a given range.
 * @array: Pointer to the first element of the array.
 * @left: Left index of the range to search in.
 * @right: Right index of the range to search in.
 * @value: Value to search for.
 *
 * Return: Index of the value in the array, or -1 if not found.
 */
int  binary_s(int *array, size_t left, size_t right, int value)
{

	size_t i = 0;
	size_t mid = 0;

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");

		i = left;
		for (; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the value in the array, or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{

	size_t left = 0;
	size_t right = 0;
	size_t bound = 1;

	if (array == NULL || size == 0)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound,
				array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	return (binary_s(array, left, right, value));
}
