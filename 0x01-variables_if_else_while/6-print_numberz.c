#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 * Description: print Numbers
 * Return: main return 0 all safe
 */
int main(void)
{
	int nbr;

	nbr = 48;
	while (nbr <= '9')
		putchar(nbr++);
	putchar('\n');
	return (0);
}
