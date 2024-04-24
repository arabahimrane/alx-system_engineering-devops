#include "lists.h"

/**
 * get_nodeint_at_index - return the nth of linked list.
 * @head: head node
 * @index: nth to return
 *
 * Description: function that deletes the head node of a List.
 * Return: list of nth data or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp_lst;
	unsigned int count;

	count = 0;
	tmp_lst = head;
	while (tmp_lst)
	{
		if (count == index)
			return (tmp_lst);
		tmp_lst = tmp_lst->next;
		count++;
	}
	return (NULL);
}
