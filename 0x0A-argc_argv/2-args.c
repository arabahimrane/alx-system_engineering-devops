#include "main.h"
/**
 * main - prints buffer in hexa
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Sucess.
 */

int main(int ac, char **av)
{
	int i;

	i = -1;
	while (++i < ac)
	{
		while (*av[i])
			_putchar(*av[i]++);
		_putchar('\n');
	}
		return (0);
}

