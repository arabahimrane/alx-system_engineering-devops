#include "lists.h"

/**
 * print_listint_safe - Time to print with safe way.
 * @head: head node
 *
 * Description: function that prints a List.
 * Return: nbr of nodes or 0.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *TMP_lst;
	const listint_t *LST;
	size_t cnt;
	size_t i;

	cnt = 0;
	TMP_lst = head;
	while (TMP_lst)
	{
		printf("[%p] %d\n", (void *)TMP_lst, TMP_lst->n);
		cnt++;
		TMP_lst = TMP_lst->next;
		i = -1;
		LST = head;
		while (++i < cnt)
		{
			if (TMP_lst == LST)
			{
				printf("-> [%p] %d\n", (void *)TMP_lst, TMP_lst->n);
				return (cnt);
			}
			LST = LST->next;
		}
	}
	return (cnt);
}
