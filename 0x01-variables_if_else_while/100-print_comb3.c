#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 * Description: print combination 2 digit
 * Return: main return 0 all safe
 */
int main(void)
{
	int c;
	int j;

	c = '0';
	while (c <= '9')
	{
		j = c + 1;
		while (j <= '9')
		{
			putchar(c);
			putchar(j);
			if (j++ != '9' || c != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
	putchar('\n');
	return (0);
}
