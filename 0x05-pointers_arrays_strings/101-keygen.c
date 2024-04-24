#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int password[69];
	int i;
	int sum;

	sum = 0;
	i = -1;	
	srand(time(NULL));
	while (++i <= 69)
	{
		password[i] = rand() % 78;
		sum += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			putchar(2772 - sum);
			return (0);
		}
	}
	return (0);
}
