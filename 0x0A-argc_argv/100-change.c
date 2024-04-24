#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -  prints the minimum number of coins to make change for an amount.
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Sucess.
 */

int main(int ac, char **av)
{
	int amount;
	int cache[] = {25, 10, 5, 2, 1};
	int i;
	int tms;

	if (ac == 2)
	{
		amount = atoi(av[1]);
		i = 0;
		tms = 0;
		if (amount < 0)
		{
			printf("0\n");
			return (0);
		}
		while (amount != 0)
		{
			if (amount < 0)
			{
				amount += cache[i];
				if (i > 5)
					i = 4;
				else
				 i++;
				tms--;
			}
			amount -= cache[i];
			tms++;
		}
		printf("%d\n", tms);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

