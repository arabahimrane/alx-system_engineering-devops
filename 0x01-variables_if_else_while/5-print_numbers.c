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

	c = '0';
	while (c <= '9')
		putchar(c++);
	putchar('\n');
	return (0);
}
