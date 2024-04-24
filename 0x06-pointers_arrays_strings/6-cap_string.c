#include "main.h"

/**
* cap_string - Capitalizes all words of str.
* @str: str.
*
* Description: function that capitalizes all words of a string.
* Return: Cap str
*/

char *cap_string(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i])
	{
		if (str[i] <= ' ' || str[i] == ',' || str[i] == ';' ||
				str[i] == '.' || str[i] == '!' ||
				str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' ||
				str[i] == '{' || str[i] == '}')
		{
			while (str[++i] <= ' ')
				;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
