#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free dlInked list
 * @head: head.
 *
 * Description: function that free a dlistint_t.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
