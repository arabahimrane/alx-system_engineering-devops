#include "main.h"

/**
* _isupper - checks for uppercase character.
* @c: int value
*
* Description : checks for uppercase character.
* Return: 1 if Upper otherwise 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
