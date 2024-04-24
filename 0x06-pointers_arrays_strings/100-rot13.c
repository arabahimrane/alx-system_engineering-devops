#include "main.h"

/**
* rot13 - rot13
* @str: str.
*
* Description: function that encodes a string using rot13.
* Return: rot13 str
*/

char *rot13(char *str)
{
	int i;
	int j;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = -1;
	j = 0;
	while (str[++i])
	{
		j = 0;
		while (str[i] != alpha[j] && str[i] && alpha[j])
			j++;
		if (str[i] == alpha[j])
			str[i] = rot13[j];
	}
	return (str);
}
