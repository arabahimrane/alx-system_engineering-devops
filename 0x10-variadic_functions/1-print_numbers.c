#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print nbr.
 * @separator: string to be printed between numbers.
 * @n: nbr of parms.
 *
 * Description: function that prints numbers, followed by a new line.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap_arg;

	if (n > 0)
	{
		va_start(ap_arg, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap_arg, int));
			if (i < n - 1 && separator)
				printf("%s", separator);
		}
		va_end(ap_arg);
	}
	printf("\n");
}
