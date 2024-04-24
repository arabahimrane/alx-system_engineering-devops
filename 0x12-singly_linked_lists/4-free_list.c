#include "lists.h"

/**
 * free_list - destroy list
 * @head: head node
 *
 * Description:function that frees a list.
 */

void free_list(list_t *head)
{
	list_t *fre;

	fre = head;
	while (fre)
	{
		fre = fre->next;
		free(head->str);
		free(head);
		head = fre;
	}
}
