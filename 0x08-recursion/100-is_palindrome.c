#include <string.h>
#include "main.h"

/**
* _cmp - hint for palindrome
* @s: string
* @str: last char in s str
*
* Description : function that returns 1 if a string is a palindrome and 0ifnot
* Return: 1 or 0
*/
int _cmp(char *s, char *str)
{
	if (*s != *str)
		return (0);
	if (!*s)
		return (1);
	return (_cmp(++s, --str));
}

/**
* is_palindrome -is a palindrome
* @s: string
*
* Description : function that returns 1 if a string is a palindrome and 0ifnot
* Return: 1 or 0
*/

int is_palindrome(char *s)
{
	if (*s)
		return (_cmp(s, (s + strlen(s) - 1)));
	return (0);
}
