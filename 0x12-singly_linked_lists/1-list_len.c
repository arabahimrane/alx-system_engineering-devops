#include "lists.h"

/**
 * list_len - nbr of elem in linked list
 * @h: head node
 *
 * Description: function that returns the number of elements in a linked list.
 * Return: nbr of Nodes or NULL
 */

size_t list_len(const list_t *h)
{
	size_t Node_nbr;

	Node_nbr = 0;
	while (h)
	{
		h = h->next;
		Node_nbr++;
	}
	return (Node_nbr);
}
