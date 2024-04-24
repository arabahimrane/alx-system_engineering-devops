#include "main.h"

/**
* _strlen - that returns the length of a string.
* @s: string in.
*
* Description: function that returns the length of a string.
* Return: the length of String s or 0
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - creatting files
 * @filename: filename.
 * @text_content: buffer.
 *
 * Description: Create a function that creates a file.
 * Return: 0 or nbr of letters.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (fd);
	if (text_content)
		write(fd, text_content, _strlen(text_content));
	close(fd);
	return (1);
}
