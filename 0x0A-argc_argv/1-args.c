#include <stdio.h>
#include "main.h"
/**
 * main - count arguments
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Sucess.
 */

int main(int ac, char **av __attribute__((unused)))
{
	printf("%d\n", ac - 1);
	return (0);
}

