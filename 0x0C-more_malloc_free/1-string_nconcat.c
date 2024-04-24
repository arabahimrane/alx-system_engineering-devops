#include <stdlib.h>
#include "main.h"

/**
 * _strlen - length of str
 * @str: string
 *
 * Description:function that calculate length of str
 * Return: 0 or length
 */

unsigned int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	if (!str)
		str = "";
	while (*str && str != NULL)
	{
		str++;
		i++;
	}
	return (i);
}

/**
 * string_nconcat - concatenates two str.
 * @s1: str on1
 * @s2: str 2
 * @n: nbr of char to cat
 *
 * Description:function that concatenates two strings.
 * Return: NULL or str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;

	i = -1;
	(n > _strlen(s2)) ? n = _strlen(s2) : n;
	str = malloc(_strlen(s1) + n + 1);
	if (!str)
		return (NULL);
	while (++i < _strlen(s1))
		str[i] = s1[i];
	while (i < _strlen(s1) + n)
		str[i++] = *s2++;
	str[i] = 0;
	return (str);
}
