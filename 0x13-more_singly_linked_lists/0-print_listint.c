#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print linked lists
 * @h: head node
 *
 * Description: function that prints all the elements of a list.
 * Return: nbr of Nodes or 0
 */

size_t print_listint(const listint_t *h)
{
	size_t Node_nbr;

	Node_nbr = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		Node_nbr++;
	}
	return (Node_nbr);
}
