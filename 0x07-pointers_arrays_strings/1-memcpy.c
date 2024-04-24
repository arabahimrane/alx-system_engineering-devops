#include "main.h"

/**
* _memcpy - copies memory area.
* @dest: memo area.
* @src: str to cpy.
* @n: first n bytes of memo to cpy.
*
* Description :function that copies memory area.
* Return: dest pointer.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = -1;
	while (++i < n)
		dest[i] = src[i];
	return (dest);
}
