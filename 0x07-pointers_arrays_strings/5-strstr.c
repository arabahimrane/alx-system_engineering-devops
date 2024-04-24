#include "main.h"

/**
* _strstr - locates a substring.
* @haystack: source str.
* @needle: str search for.
*
* Description : function that locates a substring.
* Return: needle string or NULL.
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = -1;
	while (haystack[++i])
	{
		j = 0;
		while (haystack[i] == needle[j] && needle[j] && haystack[i])
		{
			i++;
			j++;
		}
		if (!needle[j])
			return (haystack + i - j);
	}
	return (0);
}
