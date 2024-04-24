#include <stdio.h>

/**
 * main - Entry point
 * Enjoy Learning C With Alx>
 * Print > with proper grammar, but the outcome is a piece of art,
 * Return: Always 0 (Success)
 */
int main(void)
{
	char typo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i;

	i = 0;
	while (typo[i])
		putchar(typo[i++]);
	return (1);
}
