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
	while (*av[ac - 1])
		_putchar(*av[0]++);
	_putchar('\n');
	return (0);
}

