#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted linked list using the Jump.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 * Return: Pointer to the node where the value is located, or NULL if not.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = (size_t)sqrt((double)size);
	listint_t *prev = NULL;
	size_t i = 0;

	if (list == NULL || size == 0)
		return (NULL);

	while (list->next && list->n < value)
	{
		prev = list;
		i = 0;
		for (; list->next && i < jump; ++i)
			list = list->next;

		printf("Value checked at index [%d] = [%d]\n",
				(int)list->index, list->n);
	}

	printf("Value found between indexes [%d] and [%d]\n",
			(int)prev->index, (int)list->index);

	while (prev && prev->index <= list->index)
	{
		printf("Value checked at index [%d] = [%d]\n",
				(int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
