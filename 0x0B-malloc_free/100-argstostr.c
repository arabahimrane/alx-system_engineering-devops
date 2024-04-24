#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments
 * @ac: arguments counts
 * @av: arguments vector
 *
 * Description: function that concatenates all the arguments of your program.
 * Return: NULL or string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int size;
	int i;

	str = NULL;
	i = -1;
	size = ac;
	if (ac == 0 || !av)
		return (NULL);
	while (++i < ac)
		size += strlen(av[i]);
	str = (char *) malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		strcat(str, av[i]);
		strcat(str, "\n");
	}
	return (str);
}

