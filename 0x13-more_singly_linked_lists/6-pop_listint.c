#include "lists.h"

/**
 * pop_listint - pop the head of linked list.
 * @head: head node
 *
 * Description:function that deletes the head node of a List.
 * Return: 0 or data deleted.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp_lst;
	int nbr;

	nbr = 0;
	tmp_lst = *head;
	if (tmp_lst)
	{
		*head = tmp_lst->next;
		nbr = tmp_lst->n;
		free(tmp_lst);
		tmp_lst = *head;
	}
	return (nbr);
}
