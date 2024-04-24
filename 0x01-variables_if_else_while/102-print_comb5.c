#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 * Description: Combine 4 digit -_-
 * Return: main return 0 all safe
 */
int main(void)
{
	int c;
	int j;

	c = 0;
	while (c <= 99)
	{
		j = c;
		while (++j <= 99)
		{
			putchar(c / 10 + '0');
			putchar(c % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (c != 98 || j != 99)
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
