#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free Dogs
 * @d: struct type;
 *
 * Description: function that free dog.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
