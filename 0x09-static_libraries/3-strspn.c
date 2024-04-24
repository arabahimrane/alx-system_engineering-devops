#include "main.h"

/**
* _strspn - gets the length of a prefix substring.
* @s: string srouce.
* @accept: sub str.
*
* Description : function that gets the length of a prefix substring.
* Return: sub str length.
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count;

	i = -1;
	count = 0;
	while (s[++i])
	{
		j = 0;
		while (accept[j] && s[i] != accept[j])
			j++;
		if (!accept[j])
			return (count);
		count++;
	}
	return (count);
}
