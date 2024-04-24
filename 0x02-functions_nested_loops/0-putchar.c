#include "main.h"

/**
 * main - Entry
 * Description:  writes the _puchar.
 *
 * Return: main return 1 (Success).
 */
int main(void)
{
	int i;
	char str[] = "_putchar\n";

	i = 0;
	while (str[i])
		_putchar(str[i++]);
	return (0);
}
