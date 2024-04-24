#include "main.h"

/**
* _strncat - Concatenates tow string.
* @dest: Destination value.
* @src: source string.
* @n: nbr of char
*
* Description : function that concatenates two strings.
* Return: full String dest + src.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (dest[i])
		i++;
	while (*src && n--)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
