#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print str.
 * @separator: string to be printed between str.
 * @n: nbr of parms.
 *
 * Description: function that prints strings, followed by a new line.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap_arg;
	char *str;

	if (n > 0)
	{
		va_start(ap_arg, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(ap_arg, char *);
			(str) ? printf("%s", str) : printf("(nil)");
			if (i < n - 1 && separator)
				printf("%s", separator);
		}
		va_end(ap_arg);
	}
	printf("\n");
}
