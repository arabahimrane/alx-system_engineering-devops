#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * free_str_grid -  free 2 dimensional array
 * @grid: grid array
 * @height: height of array
 *
 * Description: function that frees a 2 dimensional grid previously created by
 * your alloc_grid function.
 */

void free_str_grid(char **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(*(grid + j));
	free(grid);
}

/**
 * count_word - count nbr of words
 * @str: string input
 *
 * Description:function that nbr of words in str.
 * Return: 0 or nbr of words
 */
int count_word(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		while (*str <= ' ' && *str)
			str++;
		if (*str > ' ' && *(str + 1) <= ' ')
			count++;
		if (!*str)
			return (count);
		str++;
	}
	return (count);
}
/**
 * strtow - splits a string
 * @str: string input
 *
 * Description:function that splits a string into words.
 * Return: NULL or grid of words
 */
char **strtow(char *str)
{
	char **grid;
	int size;
	int i;
	int word;
	int j;

	grid = NULL;
	size = 0;
	i = 0;
	word = 0;
	if (!str)
		return (NULL);
	size = count_word(str);
	grid = (char **) malloc(sizeof(char *) * (size + 1));
	if (!grid || !size)
		return (NULL);
	size = 0;
	while (str[i])
	{
		while (str[i] <= ' ' && str[i])
			i++;
		while (str[i] > ' ' && str[i++])
			size++;
		if (str[i] <= ' ' && size != 0)
		{
			grid[word] = (char *) malloc(sizeof(char) * (size + 1));
			if (!grid[word])
			{
				free_str_grid(grid, word);
				return (NULL);
			}
			j = 0;
			while (size != 0)
				grid[word][j++] = str[i - size--];
			grid[word++][j] = 0;
		}
		grid[word] = NULL;
	}
	return (grid);
}
