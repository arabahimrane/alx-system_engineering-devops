#include "lists.h"

/**
 * delete_nodeint_at_index - delet node at nth index.
 * @head: head node
 * @index: index of node.
 *
 * Description:function that deletes the node at index index of a  list
 * Return: 1 (SUCCES) -1 failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *lst;
	listint_t *d_lst;
	unsigned int count;

	count = 0;
	d_lst = *head;
	lst = *head;
	while (d_lst)
	{
		if (count == index)
		{
			if (index == 0)
			{
				*head = d_lst->next;
				free(d_lst);
				return (1);
			}
			while (--count > 0)
				lst = lst->next;
			lst->next = d_lst->next;
			free(d_lst);
			return (1);
		}
		d_lst = d_lst->next;
		count++;
	}
	return (-1);
}
