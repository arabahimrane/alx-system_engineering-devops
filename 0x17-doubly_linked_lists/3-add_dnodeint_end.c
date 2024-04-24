#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add new node at the end of dlInked list
 * @head: head.
 * @n: nbr
 *
 * Description: function that adds a new node at the end of a dlistint_t.
 * Return: Null or adress of head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *tmp2 = *head;

	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (tmp2)
	{
		while (tmp2->next)
			tmp2 = tmp2->next;
		tmp2->next = tmp;
	}
	else
	{
		*head = tmp;
	}
	tmp->prev = tmp2;
	return (tmp);
}
