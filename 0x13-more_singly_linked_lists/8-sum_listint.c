#include "lists.h"

/**
 * sum_listint - sum of all nodes nbr of linked list.
 * @head: head node
 *
 * Description:  function that returns the sum of all the data (n) of a List
 * Return: 0 or th value of sum
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp_lst;
	int count;

	count = 0;
	tmp_lst = head;
	while (tmp_lst)
	{
		count += tmp_lst->n;
		tmp_lst = tmp_lst->next;
	}
	return (count);
}
