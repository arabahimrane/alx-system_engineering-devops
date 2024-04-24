#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dogs name
 * @d: struct source
 *
 * Description:  function that print dog struct
 */
void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;

	if (d)
	{
		name = (d->name) ? d->name : (d->name = "(nil)");
		age = (d->age);
		owner = (d->owner) ? d->owner : (d->name = "(nil)");
		printf("Name: %s\n", name);
		printf("Age: %f\n", age);
		printf("Owner: %s\n", owner);
	}
}
