#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition.
 * @a: nbr1.
 * @b: nbr2.
 *
 * Description: function that add 2 int.
 * Return: addition result.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub.
 * @a: nbr1.
 * @b: nbr2.
 *
 * Description: function that substract 2 int.
 * Return: sub result.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul.
 * @a: nbr1.
 * @b: nbr2.
 *
 * Description: function that multiple 2 int.
 * Return: mul result.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div.
 * @a: nbr1.
 * @b: nbr2.
 *
 * Description: function that divide 2 int.
 * Return: div result.
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod.
 * @a: nbr1.
 * @b: nbr2.
 *
 * Description: function that calculate modulos of 2 int.
 * Return: mod result.
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
