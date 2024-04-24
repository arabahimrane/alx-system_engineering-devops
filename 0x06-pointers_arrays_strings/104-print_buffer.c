#include <stdio.h>
#include "main.h"

/**
* print_buffer - Print Buffer.
* @b: buffer.
* @size: buffer size.
*
* Description: function that prints a buffer.
*/

void print_buffer(char *b, int size)
{
	int i;
	int j;

	i = 0;
	if (size == 0)
		putchar('\n');
	while (i < size)
	{
		printf("%08x: ", i);
		j = 0;
		while (j < 10 && (i + j) < size)
		{
			printf("%02x", b[i + j]);
			j++;
			if (j % 2 == 0)
				putchar(' ');
		}
		while (j < 10)
		{
			printf("  ");
			j++;
			if (j % 2 == 0)
				putchar(' ');
		}
		j = 0;
		while (j < 10 && (i + j) < size)
		{
			if (b[i + j] < 32)
				printf(".");
			else
				printf("%c", b[i + j]);
			j++;
		}
		printf("\n");
		i += 10;
	}
}
