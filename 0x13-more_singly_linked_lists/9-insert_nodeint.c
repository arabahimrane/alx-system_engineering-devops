#include "lists.h"

/**
 * insert_nodeint_at_index - insert node nbr inside linked list
 * @head: head node
 * @idx: index of node.
 * @n: nbr to put.
 *
 * Description: function that inserts a new node at a given position.
 * Return: list or NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp_lst;
	listint_t *lst;
	unsigned int count;

	count = 0;
	lst = *head;

	tmp_lst = malloc(sizeof(listint_t));
	if (tmp_lst)
	{
		tmp_lst->n = n;
		tmp_lst->next = NULL;
		if (idx == 0)
		{
			tmp_lst->next = lst;
			*head = tmp_lst;
			return (tmp_lst);
		}
		while (lst)
		{

			if ((count + 1) == idx)
			{
				tmp_lst->next = lst->next;
				lst->next = tmp_lst;
				return (tmp_lst);
			}
			lst = lst->next;
			count++;
		}
	}
	return (NULL);
}
