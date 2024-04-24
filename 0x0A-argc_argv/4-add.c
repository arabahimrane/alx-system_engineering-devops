#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive numbers.
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Sucess.
 */

int main(int ac, char **av)
{
	int sum;
	int i;
	char *ptr;

	sum = 0;
	i = 0;
	while (++i < ac)
	{
		ptr = av[i];
		while (*ptr)
		{
			if (*ptr < '0' || *ptr > '9')
			{
				printf("Error\n");
				return (1);
			}
			ptr++;
		}
		sum += atoi(av[i]);
	}
	printf("%d\n", sum);
	return (0);
}

