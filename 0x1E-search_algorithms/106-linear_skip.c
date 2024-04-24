#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 * @list: input list
 * @value: value to search in
 * Return: pointer to the node containing the value, or NULL if not found
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (list == NULL)
		return (NULL);
	current = list;
	while (current->express && current->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				current->express->index, current->express->n);
		current = current->express;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			current->index,
			current->express ?
			current->express->index :
			current->index);
	express = current;
	while (express != NULL && express->index <= current->express->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", express->index,
				express->n);
		if (express->n == value)
			return (express);
		express = express->next;
	}
	return (NULL);
}

