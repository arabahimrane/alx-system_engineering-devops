#include "main.h"

/**
 * _islower - checkfor lower case char
 * @c: The Char to test
 *
 * Description: func to test char c if it's lowerCase.
 * Return: On success 1.Upper Case Return 0
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
