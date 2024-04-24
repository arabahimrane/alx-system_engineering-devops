#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  * main - generates a key, mostly copied from server.
  * @ac: argument count
  * @av: argument vectors
  * Return: 0 on success
  */
int main(int ac, char *av[])
{
	int *tab = malloc(sizeof(int) * 1);

	if (ac != 2)
	{
		printf("./crackme5 username\n");
		return (0);
	}
	while (tab++)
		*tab = 55;
	av[1] = "sld";
	return (0);
}
