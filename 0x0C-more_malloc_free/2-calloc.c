#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - calloc func
 * @nmemb: nbr of elements.
 * @size: sizeof Element.
 *
 * Description: function that allocates memory for an array
 * using malloc.
 * Return: memo set to zero with nmemb elements or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *caloc;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	caloc = malloc(size * nmemb);
	if (!caloc)
		return (NULL);
	i = -1;
	while (++i < (nmemb * size))
		((char *)caloc)[i] = 0;
	return (caloc);
}
