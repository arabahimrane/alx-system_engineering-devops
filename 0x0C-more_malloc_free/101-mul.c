#include <stdlib.h>
#include "main.h"

/**
* _puts - prints a string.
* @str: string to print.
*
* Description: unction that prints a string, followed by a new line, to stdout.
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

/**
 * _strlen - length of str
 * @str: str argument
 *
 * Description: func calc lenth of str
 * Return: On success a nbr. else 0
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

/**
 * multy - mult digits
 * @num1: str argument nb1
 * @num2: str argument nb2
 *
 * Description: func to mult digit by digit
 * Return: On success a nbr. else NULL
 */
int *multy(char *num1, char *num2)
{
	int *res;
	int i = 0;
	int j;
	int next;
	int size1 = _strlen(num1);
	int size2 = _strlen(num2);

	if (!size2 || !size1)
		return (NULL);
	res = (int *)malloc((size1 + size2 + 1) * sizeof(int));
	if (!res)
		return (NULL);
	while (i <= (_strlen(num1) + _strlen(num2)))
		res[i++] = 0;
	for (i = size1 - 1; i >= 0; i--)
	{
		for (j = size2 - 1; j >= 0; j--)
		{
			next = res[i + j + 1] + (num1[i] - '0') * (num2[j] - '0');
			res[i + j + 1] = next % 10;
			res[i + j] += next / 10;
		}
	}
	return (res);
}

/**
 * _isalpha - checks digit or not
 * @str: str argument
 *
 * Description:  checks for alphabetic character.
 * Return: On success 1. else -1
 */
int _isalpha(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}

/**
 * main - mult func.
 * @ac: argument count
 * @av: argument vector
 *
 * Description: program that multiplies two positive numbers.
 * Return: success 0 or 98
 */
int main(int ac, char **av)
{
	int *res;
	int j = 0;
	int i;
	char *num1 = av[1];
	char *num2 = av[2];

	if (ac != 3 || _isalpha(av[1]) || _isalpha(av[2]))
	{
		_puts("Error");
		exit(98);
	}
	res = multy(av[1], av[2]);
	if (!res)
		return (0);
	while (j < (_strlen(num1) + _strlen(num2)) && res[j] == 0)
		j++;
	if (j == (_strlen(num1) + _strlen(num2)))
		_puts("0");
	else
	{
		for (i = j; i < (_strlen(num1) + _strlen(num2)); i++)
			_putchar(res[i] + '0');
		_putchar('\n');
	}
	free(res);
	return (0);
}
