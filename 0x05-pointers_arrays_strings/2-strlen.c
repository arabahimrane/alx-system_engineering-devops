#include "main.h"

/**
* _strlen - that returns the length of a string.
* @s: string in.
*
* Description: function that returns the length of a string.
* Return: the length of String s or 0
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}
