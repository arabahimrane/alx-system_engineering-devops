#include "main.h"

/**
* _memset - fills memory with a constant byte.
* @s: src string.
* @b: bytes.
* @n: first n bytes of memo.
*
* Description : function that fills memory with a constant byte.
* Return: point to s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
		s[i++] = b;
	return (s);
}
