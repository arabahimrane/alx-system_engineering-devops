#include <stdio.h>
#include "main.h"

/**
* wildcmp - compares two strings
* @s1:first  string
* @s2:second string
*
* Description : function that compares two strings
* Return: 1 if the strings can be considered identical, otherwise return 0.
*/

int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (*s2 == '*' && *(s2 + 1) && !*s1)
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	return (0);
}
