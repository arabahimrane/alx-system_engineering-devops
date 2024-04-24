#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add nbr at the END of linked Lists.
 * @head: head node
 * @n: nbr to add.
 *
 * Description: function that adds a new node at the beginning of a list.
 * Return: node @dress of Nodes or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp_lst;

	listint_t *lst;

	lst = *head;
	tmp_lst = malloc(sizeof(listint_t));
	if (tmp_lst)
	{
		tmp_lst->n = n;
		tmp_lst->next = NULL;
		if (!lst)
			*head = tmp_lst;
		else
		{
			while (lst->next)
				lst = lst->next;
			lst->next = tmp_lst;
		}
	}
	return (tmp_lst);
}
