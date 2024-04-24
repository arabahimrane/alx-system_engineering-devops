#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - nth of the list.
 * @head: head.
 * @index: index of nth item
 *
 * Description: function that returns the nth node of a DlinkedList
 * Return: NULL or node nth.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head)
	{
		if (index == i)
			return (head);
		i++;
		head = head->next;
	}
	return (head);
}
