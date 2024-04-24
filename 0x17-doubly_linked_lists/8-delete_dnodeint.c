#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete a  node.
 * @head: head.
 * @index: index of node.
 *
 * Description: function that adeletes the node at index.
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new = NULL, *tmp = *head;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp && i < index)
	{
		new = tmp;
		tmp = tmp->next;
		i++;
	}
	if (!tmp)
		return (-1);
	if (tmp->next)
		tmp->next->prev = new;
	new->next = tmp->next;
	free(tmp);
	return (1);
}
