#include <stdio.h>
#include "main.h"

/**
 * main - Print fibonacci
 *
 * Return: On success 0.
 */
int main(void)
{
	long int n1;
	long int n2;
	long int fibo;
	int i;

	n1 = 1;
	n2 = 2;
	i = 0;
	while (i < 50)
	{
		if (i < 49)
			printf("%ld, ", n1);
		else
			printf("%ld\n", n1);
		fibo = n1 + n2;
		n1 = n2;
		n2 = fibo;
		i++;
	}
	return (0);
}
