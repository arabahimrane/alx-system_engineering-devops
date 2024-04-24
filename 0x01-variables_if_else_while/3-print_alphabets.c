#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 * Description: print  alphabet in lowerCase
 * Return: main return 0 all safe
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
		putchar(c++);
	c = 'A';
	while (c <= 'Z')
		putchar(c++);
	putchar('\n');
	return (0);
}
