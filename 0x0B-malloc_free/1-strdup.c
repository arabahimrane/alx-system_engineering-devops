#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space.
 * @str: string to copy
 *
 * Description:function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * Return: NULL or str pointer.
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	i = -1;
	if (!str)
		return (NULL);
	ptr = malloc(sizeof(char) * strlen(str) + 1);
	if (!ptr)
		return (NULL);
	while (str[++i] && ptr != NULL)
		ptr[i] = str[i];
	ptr[i] = ptr[i];
	return (ptr);
}

