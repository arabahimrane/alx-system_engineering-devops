#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add nbr to linked Lists.
 * @head: head node
 * @n: nbr to add.
 *
 * Description: function that adds a new node at the beginning of a list.
 * Return: node @dress of Nodes or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp_lst;

	tmp_lst = malloc(sizeof(listint_t));
	if (tmp_lst)
	{
		tmp_lst->n = n;
		tmp_lst->next = *head;
		*head = tmp_lst;
	}
	return (tmp_lst);
}
