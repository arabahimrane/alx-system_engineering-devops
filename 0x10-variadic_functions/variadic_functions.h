#ifndef _VARIADIC_FUNC_H_
#define _VARIADIC_FUNC_H_

#include <stdarg.h>
/**
 * struct ops - Struct op
 *
 * @typo: The format type
 * @fp: The function associated to print data
 */
typedef struct ops
{
	char typo;
	void (*fp)(va_list);
}		op_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
