#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
* ft_print_arr-func to print nbrs
* @array: array.
* @left: start value.
* @right: end value.
*/
void ft_print_arr(int *array, int left, int right)
{
	int i = left;

	for ( ; i <= right; i++)
	{
		if (i != right)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
* binary_search - function that searches for a value in an array Binary search.
* @array: array
* @size: size of array.
* @value: searchy value
* Return: integer
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle;

	while (left <= right && array)
	{
		printf("Searching in array: ");
		ft_print_arr(array, left, right);

		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
