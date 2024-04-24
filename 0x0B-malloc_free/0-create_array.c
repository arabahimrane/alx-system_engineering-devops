#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array.
 * @c:char to fill the array
 *
 * Description:  function that creates an array of chars, and initializes it
 * with a specific char.
 * Return: first char.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *) malloc(size * sizeof(char));
	if (size == 0 || !ptr)
		return (NULL);
	i = -1;
	while (++i < size)
		ptr[i] = c;
	return (ptr);
}

