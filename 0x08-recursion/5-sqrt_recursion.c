#include "main.h"
/**
* _sqrt_recursion2 - square root of a nbr
* @n: n * n = nbr
* @nbr: the final value
* Description : function that returns the natural square root of a number.
* Return: sqrt(n) or 0
*/

int _sqrt_recursion2(int n, int nbr)
{
	if (nbr < 0)
		return (-1);
	if (n * n < nbr)
		return (_sqrt_recursion2(n + 1, nbr));
	return ((n * n) == nbr ? n : -1);
}

/**
* _sqrt_recursion - call sqrt for recursion
* @n: nbr
*
* Description : function that returns the natural square root of a number.
* Return: sqrt(n) or 0
*/

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion2(0, n));
}
