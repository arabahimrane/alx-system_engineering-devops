#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string destination
 * @s2: string source to add
 *
 * Description: function that concatenates two strings.
 * Return: NULL or s1 pointer with concatenation.
 */
char *str_concat(char *s1, char *s2)
{
	int size1;
	int size2;
	char *ptr;
	int i;

	(s1) ? size1 = strlen(s1) : (size1 = 0);
	(s2) ? size2 = strlen(s2) : (size2 = 0);
	ptr = (char *)malloc(sizeof(char) * (size1 + size2) + 1);
	if (!ptr)
		return (NULL);
	i = -1;
	while (++i < size1)
		ptr[i] = *s1++;
	while (i < (size1 + size2))
		ptr[i++] = *s2++;
	return (ptr);

}

