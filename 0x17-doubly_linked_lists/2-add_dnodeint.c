#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add new node at the beginning of dlInked list
 * @head: head.
 * @n: nbr
 *
 * Description: function that adds a new node at the beginning of a dlistint_t.
 * Return: Null or adress of head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);
	tmp->prev = NULL;
	tmp->n = n;
	tmp->next = *head;
	if (*head)
		(*head)->prev = tmp;
	*head = tmp;
	return (tmp);
}
