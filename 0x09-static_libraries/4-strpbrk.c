#include "main.h"

/**
* _strpbrk - searches a string.
* @s: string srouce.
* @accept: sub str.
*
* Description : function that searches a string for any of a set of bytes.
* Return: accept string.
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i] && *s != accept[i])
			i++;
		if (accept[i] != 0)
			return (s);
		s++;
	}
	return (0);
}
