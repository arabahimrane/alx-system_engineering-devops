#include "lists.h"
#include <string.h>


/**
 * _strlen - len of str.
 * @str: string.
 *
 * Description: function that returns length of string.
 * Return: length of str.
 */
size_t _strlen(const char *str)
{
	size_t len;

	len = 0;
	while (str && str[len])
		len++;
	return (len);
}

/**
 * add_node - add Node.
 * @head: head node
 * @str: data string to add.
 *
 * Description: function that adds a new node at the beginning of aka -> list.
 * Return: new head or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp_lst;

	tmp_lst = malloc(sizeof(list_t));
	if (tmp_lst)
	{
		tmp_lst->str = strdup(str);
		tmp_lst->len = _strlen(str);
		tmp_lst->next = *head;
		*head = tmp_lst;
	}
	return (tmp_lst);
}
