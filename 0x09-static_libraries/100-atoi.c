#include "main.h"
#include <stdio.h>
/**
* _atoi - Convert a string to an integer.
* @s: String input.
*
* Description: function that convert a string to an integer.
* Return: int value from String.
*/
int _atoi(char *s)
{
	int i;
	unsigned int nbr;
	int n;

	nbr = 0;
	i = 0;
	n = 1;
	while ((s[i] < '0' || s[i] > '9') && s[i])
	{
		if (s[i] == '-')
			n *= -1;
		i++;
	}
	if (s[i] >= '0' && s[i] <= '9' && s[i])
	{
		while (s[i] >= '0' && s[i] <= '9' && s[i])
		{
			nbr = nbr * 10 + s[i] - '0';
			i++;
		}
	}
	return (n * nbr);
}
