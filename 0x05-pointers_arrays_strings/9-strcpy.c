#include "main.h"

/**
* _strcpy - cpy string
* @dest: dest String.
* @src: src String.
*
* Description: function that copies the string
* pointed to by src, including the terminating
* null byte (\0), to the buffer pointed to by dest.
* Return: String dest value.
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
