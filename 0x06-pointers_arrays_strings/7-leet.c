#include "main.h"

/**
* leet - 1337 Code.
* @str: str.
*
* Description: func that encodes a string into 1337.
* Return: 1337 str
*/

char *leet(char *str)
{
	int i;
	int j;
	char *str1 = "aeotl";
	char *STR1 = "AEOTL";
	char *nbr = "43071";

	i = -1;
	while (str[++i])
	{
		j = 0;
		while (str[i] != str1[j] && str[i] != STR1[j] && str1[j])
			j++;
		if (str[i] == str1[j] || str[i] == STR1[j])
			str[i] = nbr[j];
	}
	return (str);
}
