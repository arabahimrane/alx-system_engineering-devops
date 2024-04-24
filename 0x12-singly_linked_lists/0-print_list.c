#include "lists.h"
#include <stdio.h>

/**
 * print_list - print linked lists
 * @h: head node
 *
 * Description: function that prints all the elements of a list.
 * Return: nbr of Nodes or NULL
 */

size_t print_list(const list_t *h)
{
	size_t Node_nbr;

	Node_nbr = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		Node_nbr++;
	}
	return (Node_nbr);
}
