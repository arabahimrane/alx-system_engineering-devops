#include "main.h"

/**
* rev_string - rev string.
* @s: string.
*
* Description: function that prints a string, in reverse
*/
void rev_string(char *s)
{
	int i;
	char tmp;
	int j;

	i = -1;
	j = 0;
	while (s[++i])
		;
	while (j < --i)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j++;
	}
}
