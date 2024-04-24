#include "main.h"
/**
* is_prime - Prime nbr
* @n: nbr
* @nbr: nbr final prime nbr
* Description :  function that returns 1 if the input integer is a prime
* number, otherwise return 0.
* Return: prime(n)  1 or 0
*/

int is_prime(int n, int nbr)
{
	if (nbr <= 1)
		return (0);
	if (n <= (nbr / 2) && !(nbr % n))
		return (0);
	if (n > (nbr / 2))
		return (1);
	return (is_prime(n + 1, nbr));
}

/**
* is_prime_number - Prime nbr
* @n: nbr
*
* Description :  function that returns 1 if the input integer is a prime
* number, otherwise return 0.
* Return: prime(n)  1 or 0
*/

int is_prime_number(int n)
{
	return (is_prime(2, n));
}
