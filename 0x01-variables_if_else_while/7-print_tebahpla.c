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
	char c;

	c = 'z';
	while (c >= 'a')
		putchar(c--);
	putchar('\n');
	return (0);
}
