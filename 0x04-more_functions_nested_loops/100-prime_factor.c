#include <stdio.h>
#include <math.h>
#include "main.h"

/**
* main - Fizz Buzz.
* Description : Write a program that prints the numbers from 1 to 100.
* Return: Always 0 (Sucess).
*/
int main(void)
{
	int i;
	unsigned long int nbr = 612852475143;

	i = sqrt(nbr) - 1;
	while (++i)
	{
		if (nbr % i == 0)
		{
			printf("%d\n", i);
			return (0);
		}
	}
	return (0);
}
