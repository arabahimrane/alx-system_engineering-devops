#include "main.h"

/**
* _strlen - lenght of str.
* @str: str.
*
* Description: Calculate length of str.
* Return: length of str
*/
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
* _strrev - Reverse str.
* @str: str.
*
* Description: function that reverses the
* content of an array of str
* Return: reversed str
*/

char *_strrev(char *str)
{
	int i;
	int j;
	int tmp;

	j = _strlen(str);
	i = -1;
	tmp = 0;
	while (++i < --j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
	return (str);
}

/**
* infinite_add -  adds two numbers.
* @n1: str nbr1.
* @n2: str2 nbr2.
* @r: buffer.
* @size_r: buffer size.
*
* Description: function that adds two numbers.
* Return: value of adder
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int j;
	int nbr1;
	int nbr2;
	int buffer;
	int size_count;

	i = _strlen(n1);
	j = _strlen(n2);
	buffer = 0;
	size_count = 0;
	if (--i >= size_r || --j  >= size_r)
		return (0);
	while (i >= 0 || j >= 0 || buffer == 1)
	{
		(i < 0) ? (nbr1 = 0) : (nbr1 = n1[i] - '0');
		(j < 0) ? nbr2 = 0 : (nbr2 = n2[j] - '0');
		if ((nbr1 + nbr2 + buffer) >= 10)
		{
			*(r + size_count) = (nbr1 + nbr2 + buffer) % 10 + '0';
			buffer = 1;
		}
		else
		{
			*(r + size_count) = (nbr1 + nbr2 + buffer) + '0';
			buffer = 0;
		}
		size_count++;
		i--;
		j--;
		if (size_count == size_r)
			return (0);
	}
	*(r + size_count) = 0;
	r = _strrev(r);
	return (r);
}
