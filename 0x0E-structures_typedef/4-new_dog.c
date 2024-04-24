#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - length of str
 * @str: str argument
 *
 * Description: func calc lenth of str
 * Return: On success a nbr. else 0
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
* _strcpy - cpy string
* @dest: dest String.
* @src: src String.
*
* Description: function that copies the string
* pointed to by src, including the terminating
* null byte (\0), to the buffer pointed to by dest.
* Return: String dest value.
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Creat new dog
 * @name: name
 * @age: age
 * @owner:owner
 *
 * Description:  function that creates a new dog.
 * Return: dog_t type or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(*n_dog));
	if (!n_dog)
		return (NULL);
	n_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!n_dog->name)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!n_dog->owner)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	n_dog->name = _strcpy(n_dog->name, name);
	n_dog->age = age;
	n_dog->owner = _strcpy(n_dog->owner, owner);
	return (n_dog);
}
