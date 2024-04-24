#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert a new node.
 * @h: head.
 * @idx: index of node.
 * @n: nbr.
 *
 * Description: function that inserts a new node at a given position.
 * Return: NULL or node adress
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tmp;
	unsigned int i = 0;

	if (h == NULL || new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	tmp = *h;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (tmp)
	{
		if (tmp->next == NULL && i == idx - 1)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		else if ((idx - 1) == i)
		{
			new->next = tmp->next;
			new->prev = tmp;
			tmp->next->prev = new;
			tmp->next = new;
			return (new);
		}
		i++;
		tmp = tmp->next;
	}
	free(new);
	return (NULL);
}
