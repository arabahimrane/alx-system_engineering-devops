#include "main.h"

/**
* _strlen_recursion - length of a string.
* @s: src string to print.
*
* Description :  function that returns the length of a string.
* Return: length of a string. or 0
*/

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}
