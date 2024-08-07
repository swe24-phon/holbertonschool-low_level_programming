#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer to the struct
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
