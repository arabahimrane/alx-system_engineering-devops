#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers.
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Sucess.
 */

int main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%d\n", atoi(av[1]) * atoi(av[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

