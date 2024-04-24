#include "main.h"

/**
* string_toupper - str to Upper
* @str: str.
*
* Description: function that changes all lowercase letters
* of a string to uppercase.
* Return: UPPER str
*/

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
