#include "lists.h"

/**
 * free_listint2 - free lists
 * @head: head node
 *
 * Description: function that frees list.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp_lst;

	while (head && *head)
	{
		tmp_lst = (*head)->next;
		free(*head);
		*head = tmp_lst;
	}
}
