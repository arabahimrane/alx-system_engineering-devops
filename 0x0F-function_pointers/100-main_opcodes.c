#include <stdio.h>
#include <stdlib.h>

/**
 * main - Operation code implimentation.
 * @ac: nbr of argument
 * @av: vector of args
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int value;

	value = -1;
	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(av[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (++value < atoi(av[1]))
	{
		printf("%02x", ((unsigned char *)main)[value]);
		if (value < atoi(av[1]) - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
