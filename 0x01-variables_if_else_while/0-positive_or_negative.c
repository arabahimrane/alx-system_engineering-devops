#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry
 * Description: output if n nb positive or negative
 * Return: main return 0 all safe
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >= 0)
	{
		(n == 0) ? printf("%d is zero\n", n) : printf("%d is positive\n", n);
	}
	else
		printf("%d is negative\n", n);
	return (0);
}
