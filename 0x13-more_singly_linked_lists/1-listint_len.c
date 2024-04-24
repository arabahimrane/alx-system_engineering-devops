#include "lists.h"

/**
 * listint_len - print nbr of elem Nodes.
 * @h: head node
 *
 * Description: function that returns the number of elements in a linked List.
 * Return: nbr of Nodes or NULL
 */

size_t listint_len(const listint_t *h)
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
