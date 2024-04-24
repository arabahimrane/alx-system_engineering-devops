#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 * Description: Combine 3 digit -_-
 * Return: main return 0 all safe
 */
int main(void)
{
	int c;
	int j;
	int k;

	c = '0';
	while (c <= '9')
	{
		j = c;
		while (++j <= '9')
		{
			k = j;
			while (++k <= '9')
			{
				putchar(c);
				putchar(j);
				putchar(k);
				if (j != '8' || c != '7' || k != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		c++;
	}
	putchar('\n');
	return (0);
}
