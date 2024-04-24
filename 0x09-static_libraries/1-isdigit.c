#include "main.h"

/**
* _isdigit - checks for a digit.
* @c: int value
*
* Description : checks for a digit bitween 0 and 9.
* Return: 1 if digit otherwise 0
*/

int _isdigit(int c)
{
	if ((c >= 0 && c <= 9) || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
