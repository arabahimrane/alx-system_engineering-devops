#include "main.h"

/**
* _strcmp - compares tow String.
* @s1: str1 value.
* @s2: str2 value.
*
* Description: function that compares two strings.
* Return: int value positive or negative.
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i + 1] && s2[i + 1])
		i++;
	return (s1[i] - s2[i]);
}
