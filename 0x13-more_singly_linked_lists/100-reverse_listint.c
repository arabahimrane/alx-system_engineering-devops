#include "lists.h"

/**
 * reverse_listint - reverse the word list.
 * @head: head node
 *
 * Description:function that reverse a list.
 * Return: list or NULL
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *lst;
	listint_t *r_lst;

	lst = *head;
	r_lst = NULL;
	while (lst)
	{
		lst = lst->next;
		(*head)->next = r_lst;
		r_lst = *head;
		*head = lst;
	}
	*head = r_lst;
	return (r_lst);
}
