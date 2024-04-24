#include "lists.h"

/**
 * free_listint_safe - Time to frees all nodes  with safe.
 * @h: head node
 *
 * Description: function that frees a List.
 * Return: nbr of nodes or 0.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp_lst;
	size_t cnt;

	cnt = 0;
	while (*h)
	{
		tmp_lst = (*h)->next;
		free(*h);
		cnt++;
		if (*h <= tmp_lst)
		{
			*h = NULL;
			return (cnt);
		}
		*h = tmp_lst;
	}
	*h = NULL;
	return (cnt);
}
