#include "lists.h"

/**
 * free_listint - free lists
 * @head: head node
 *
 * Description: function that frees list.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp_lst;

	tmp_lst = head;
	while (tmp_lst)
	{
		tmp_lst = tmp_lst->next;
		free(head);
		head = tmp_lst;
	}
}
