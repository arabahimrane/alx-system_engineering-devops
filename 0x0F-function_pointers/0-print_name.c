#include "function_pointers.h"

/**
 * print_name - Print name
 * @name: name that can be printed
 * @f: ptr of func
 *
 * Description:  func to print name using ptr of func
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
