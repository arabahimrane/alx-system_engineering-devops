#include "lists.h"

/**
 * find_listint_loop - Floyd's cycle-finding algorithm.
 * @head: head node
 *
 * Description: function find the frst node.
 * Return: @dress where we start./NULL.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare;
	listint_t *tut;

	hare  = head;
	tut = head;
	if (hare && hare->next)
	{
		while (hare && hare->next)
		{
			tut = tut->next;
			hare = hare->next->next;
			if (hare == tut)
			{
				tut = head;
				while (tut != hare)
				{
					tut = tut->next;
					hare = hare->next;
				}
				return (hare);
			}

		}
	}
	return (NULL);
}
