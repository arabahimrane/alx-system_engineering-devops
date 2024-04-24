#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - sum of all nth nodes
 * @head: head.
 *
 * Description: function that returns the sum of all nth node of a DlinkedList
 * Return: result or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int res;

	res = 0;
	while (head)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
