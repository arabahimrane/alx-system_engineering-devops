#include <stdio.h>
#include "main.h"

/**
 * main - Print fibonacci
 *
 * Return: On success 0.
 */
#include <stdio.h>
int main(void)
{
	unsigned long int i, n1, n2, j1, j2, k1, k2;

	n1 = 1;
	n2 = 2;
	printf("%lu", n1);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", n2);
		n2 = n2 + n1;
		n1 = n2 - n1;
	}
	j1 = n1 / 1000000000;
	j2 = n1 % 1000000000;
	k1 = n2 / 1000000000;
	k2 = n2 % 1000000000;
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}
	printf("\n");
	return (0);
}
