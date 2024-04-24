#include "main.h"

/**
* _strncpy - copies a string.
* @dest: Destination value.
* @src: source string.
* @n: nbr of char
*
* Description : function that cpy two strings.
* Return: full String dest cpy src.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (*src && i < n)
		dest[i++] = *src++;
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
