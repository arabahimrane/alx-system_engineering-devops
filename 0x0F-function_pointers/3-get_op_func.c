#include "3-calc.h"

/**
 * get_op_func - selection of op
 * @s: ptr func to action on arr.
 *
 * Description:  that selects the correct function to perform the operation
 * asked by the user
 * Return: found the operation return 1 or 0.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = -1;
	while (++i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
	}
	return (NULL);
}

