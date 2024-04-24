#include "main.h"

/**
* _strcat - Concatenates two strings.
* @dest: Destination value.
* @src: source string.
*
* Description : function that concatenates two strings.
* Return: full String dest + src.
*/

char *_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
