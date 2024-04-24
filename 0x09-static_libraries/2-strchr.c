#include <stdio.h>
#include "main.h"

/**
* _strchr - locates a character in a string.
* @s: string srouce.
* @c: char to search for.
*
* Description : function that locates a character in a string.
* Return: src in char pointer.
*/

char *_strchr(char *s, char c)
{
	if (*s == c)
		return (s);
	while (*(s++))
		if (*s == c)
			return (s);
	return (0);
}
