#include <stdio.h>
#include "main.h"

/**
* main - Fizz Buzz.
* Description : Write a program that prints the numbers from 1 to 100.
* Return: Always 0 (Sucess).
*/
int main(void)
{
	int i;

	i = 0;
	while (++i < 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
